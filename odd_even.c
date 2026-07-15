#include <stdio.h>

int main(){
    int i;

    printf("odd numbers: \n");
    i=1;
    while(i<=100){
    
        printf("%d ",i);
        i+=2;
        
        
    }
    printf("even numbers: \n");
    i=2;
    while(i<=100){
        printf("%d ",i);
        i+=2;
   
    }
    return 0;

}