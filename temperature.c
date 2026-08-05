#include<stdio.h>
int main(){
    int choice;
    float temp;

    do{
        printf("\n------ MENU ------\n");
        printf("1. Check Temperature\n");
        printf("2. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice){
    case 1:
        printf("enter temperature: ");
        scanf("%f",&temp);

        if(temp < 0) {
                printf("Freezing Weather\n");
            }

            else if(temp >= 0 && temp < 10) {
                printf("Very Cold Weather\n");
            }

            else if(temp >= 10 && temp < 20) {
                printf("Cold Weather\n");
            }

            else if(temp >= 20 && temp < 30) {
                printf("Normal Weather\n");
            }

            else if(temp >= 30 && temp < 40) {
                printf("Hot Weather\n");
            }

            else {
                printf("Very Hot Weather\n");
            }

            break;
    case 2:
        printf("exiting...");
        break;

    default:
        printf("error");
        }

    }while(choice!=2);
    return 0;
}
