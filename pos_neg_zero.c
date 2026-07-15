#include <stdio.h>
int main(){
    int num;
    char choice;

    do{
        printf("enter a number: ");
        scanf("%d", &num);

        if(num>0){
            printf("positive\n");
        }else if(num<0){
            printf("negative\n");
        }else{
            printf("zero\n");
        }
        printf("do you want to continue? (y/n)");
        scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');

    return 0;
}