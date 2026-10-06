#include <stdio.h>

void exchange(int *, int *);

int main(void){
    int a=5;
    int b=7;
    exchange(&a, &b);
    printf("%d %d\n", a , b);
    return 0;

}
void exchange(int* px, int* py){
    int temp;
    temp=*px;
    *px=*py;
    *py=temp;
    return;
}
