#include <stdio.h>
int main(){
    int n=10;
    int *p;
    p=&n;
    printf("value of n=%d\n",n);
    printf("address of =%p\n",&n);
    printf("value using pointer=%d\n", *p);
    return 0;
}