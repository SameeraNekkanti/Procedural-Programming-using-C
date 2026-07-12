#include <stdio.h>

int main(){
    char num[17];
   
    printf("enter your credit card number: \n");
    scanf("%16s", num);

    printf("credit card number is: %s\n", num);
    for(int  i=0; i<12;i++){
        num[i]='*';

    }
    
    printf("credit card number is: %s\n", num);



    return 0;
}
