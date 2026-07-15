#include <stdio.h>

int main(){
    int n, i;

    printf("enter n: ");
    scanf("%d", &n);

    i=1;
    printf("1 to n: \n");
    while(i<=n){
        printf("%d ", i);
        i++;
    }
    printf("\n");

    i=n;
    printf("n to i: \n");
    while(i>=1){
        printf("%d ", i);
        i--;
    }
    return 0;

}