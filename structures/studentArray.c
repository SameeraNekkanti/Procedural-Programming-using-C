#include <stdio.h>
#include <string.h>

struct Student{
    char name[50];
    int age;
    int marks[3];
    int total;
};

int calculateTotal(int marks[]){
    return marks[0] + marks[1] + marks[2];
}

struct Student findMin(struct Student students[], int n){
    int i;
    int minIndex = 0;

    for(int i=1; i<n; i++){
        if(students[i].total < students[minIndex].total){
            minIndex = i;
        }
    }

    return students[minIndex];
}

void display(struct Student s){
    printf("Name  : %s\n", s.name);
    printf("Age   : %d\n", s.age);
    printf("Marks : %d %d %d\n",s.marks[0], s.marks[1], s.marks[2]);
    printf("Total : %d\n", s.total);
}

int main(){
    struct Student s[10], temp, minStudent;
    int i, j;
    for(i=0; i<10; i++){
        printf("\nEnter details of student %d\n", i+1);

        printf("Name: ");
        scanf(" %49[^\n]", s[i].name);

        printf("Enter age: ");
        scanf("%d", &s[i].age);

        printf("Enter marks in 3 subjects: ");

        for(j=0; j<3; j++){
            scanf("%d", &s[i].marks[j]);
        }

        s[i].total = calculateTotal(s[i].marks);
    }

    /*ascending*/
    for(i=0; i<9; i++){
        for(j=i+1; j<10; j++){
            if(strcmp(s[i].name, s[j].name) > 0){
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }

    printf("\nStudents Sorted by Name (Ascending)\n");

    for(i=0; i<10; i++){
        printf("\nStudent %d\n", i+1);
        display(s[i]);
    }

    /*descending*/
    for(i=0; i<9; i++){
        for(j=i+1; j<10; j++){
            if(s[i].total < s[j].total){
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }

    printf("\nStudents Sorted by Total (Descending)\n");

    for(i=0; i<10; i++){
        printf("\nStudent %d\n", i+1);
        display(s[i]);
    }

    /* Find minimum total */
    minStudent = findMin(s, 10);

    printf("\nStudent with Minimum Total Marks\n");
    display(minStudent);

    return 0;
}
