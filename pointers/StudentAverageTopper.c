#include <stdio.h>
struct Student{
    int rollNo;
    char name[50];
    float marks[3];
    float total;
    float avg;

};
int main(){
    struct Student s[100];
    int n, i, j, topper=0;
    printf("Enter number of students: ");
    scanf("%d", &n);
    for(i=0; i<n; i++){
        printf("enter roll no.: ");
        scanf("%d", &s[i].rollNo);
        printf("enter student name: ");
        scanf("%s", s[i].name);
        s[i].total=0;
        for(j=0; j<3; j++){
            printf("Enter marks in subject %d: ", j + 1);
            scanf("%f",&s[i].marks[j]);
            s[i].total=s[i].total+s[i].marks[j];

        }
        s[i].avg=s[i].total/3;

    }
    for(i=1; i<n; i++){
        if(s[i].avg>s[topper].avg){
            topper=i;
        }
    }
    printf("\n--- Student Details ---\n");

    for (i = 0; i < n; i++)
    {
        printf("\nRoll Number: %d", s[i].rollno);
        printf("\nName: %s", s[i].name);
        printf("\nTotal Marks: %.2f", s[i].total);
        printf("\nAverage Marks: %.2f\n", s[i].average);
    }
    printf("\n--- Topper Details ---\n");
    printf("Roll Number: %d\n", s[topper].rollno);
    printf("Name: %s\n", s[topper].name);
    printf("Average Marks: %.2f\n", s[topper].average);

    return 0;

}
