#include <stdio.h>

struct Student {
    int roll_no;
    char name[50];
    float total;
};
void checkResult(struct Student s){
    float percentage=(s.total/100)*100;
    printf("\nRoll No    : %d\n", s.roll_no);
    printf("Name       : %s\n", s.name);
    printf("Percentage : %.2f%%\n", percentage);
    if (percentage >= 40)
        printf("Result     : PASS\n");
    else
        printf("Result     : FAIL\n");


}
int main(){
    struct Student s[3];
    int i;
    for(i=0; i<3; i++){
    printf("\nEnter details of student %d\n", i + 1);
    printf("Roll number: ");
    scanf("%d", &s[i].roll_no);
    printf("Name: ");
    scanf(" %49[^\n]", s[i].name);
     printf("Enter total marks (out of 100): ");
        scanf("%f", &s[i].total);
    }
    for (i = 0; i < 3; i++) {
        printf("\n----- Student %d Result -----\n", i + 1);
        checkResult(s[i]);
    }
    return 0;


}
