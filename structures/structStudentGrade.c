#include <stdio.h>

struct Marks{
    float math, science, english;
};

struct Student{
    int roll_no;
    char name[50];
    struct Marks m;
};

void calculateGrade(struct Student s){
    float avg;
    avg=(s.m.math+s.m.science+s.m.english)/3;
    printf("\nstudent name: %s", s.name);
    printf("\nroll number: %d", s.roll_no);
    printf("\navg marks: %.2f", avg);
    if (avg >= 80)
        printf("\nGrade: A");
    else if (avg >= 60)
        printf("\nGrade: B");
    else
        printf("\nGrade: C");

}
int main(){
    struct Student s;
    printf("enter roll no: ");
    scanf("%d",&s.roll_no);
    printf("enter name: ");
    scanf("%s", s.name);
    printf("math marks: ");
    scanf("%f",&s.m.math);
    printf("Enter Science marks: ");
    scanf("%f", &s.m.science);

    printf("Enter English marks: ");
    scanf("%f", &s.m.english);
    calculateGrade(s);
    return 0;

}
