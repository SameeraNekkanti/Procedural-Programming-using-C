#include <stdio.h>
struct Student{
    int roll;
    char name[50];
    float marks;

};
struct Student copy(struct Student s){
    return s;
};
int main(){
    struct Student s1, s2;
    printf("enter roll no: ");
    scanf("%d", &s1.roll);

    printf("Enter name: ");
    scanf("%49s", s1.name);

    printf("Enter marks: ");
    scanf("%f", &s1.marks);
    s2=copy(s1);
    printf("\nOriginal Student Record");
    printf("\nRoll Number: %d", s1.roll);
    printf("\nName: %s", s1.name);
    printf("\nMarks: %.2f", s1.marks);
     printf("\n\nCopied Student Record");
    printf("\nRoll Number: %d", s2.roll);
    printf("\nName: %s", s2.name);
    printf("\nMarks: %.2f\n", s2.marks);
    return 0;

}
