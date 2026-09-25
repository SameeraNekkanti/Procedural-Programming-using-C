#include <stdio.h>
int main(){
    int a[5];
    int *p;
    int i;
    p=a;
    printf("enter 5 integers\n");
    for(int i=0; i<5; i++){
        scanf("%d", &a[i]);
    }
    printf("\nAddress and values:\n");
    for(int i=0; i<5; i++){
        printf("address= %p, value=%d\n", (void *)(p+i),*(p+i));
    }
    return 0;

}
