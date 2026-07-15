#include <stdio.h>

int main(){
    int num, count=0;

    printf("enter a number: ");
    scanf("%d", &num);
    do{
        
        num=num/10;
        count++;

    }while(num!=0);

    printf("Number of digits = %d", count);
}