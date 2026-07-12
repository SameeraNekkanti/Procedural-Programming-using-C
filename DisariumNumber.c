#include <stdio.h>
#include <math.h>
int main(){
    int num, change, rem;
    int digits=0;
    int sum=0;
    
    printf("enter a number: ");
    scanf("%d", &num);

    change=num;

    while(change>0){
        digits++;
        change=change/10;
    }

    change=num;

    while(change>0){
        rem=change%10;
        sum+=pow(rem, digits);
        digits--;
        change=change/10;
    }

    if(sum==num){
        printf("%d is a disarium number. \n", num);
        
    }else{
        printf("%d is not a disarium number. \n", num);
    }

    return 0;
}