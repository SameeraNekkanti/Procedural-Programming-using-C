#include <stdio.h>

int main(){

    int x, digit, sum_digits;
    printf("enter a positive integer: ");
    scanf("%d", &x);
    sum_digits=0;
    while (x>0){

        digit=x%10;
        sum_digits=sum_digits+digit;
        x=x/10;
    
}

printf("the sum of the digits is %d!\n", sum_digits);

    
}

