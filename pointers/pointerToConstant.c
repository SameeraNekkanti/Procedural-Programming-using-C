#include <stdio.h>
int main(){
    int a=10, b=20;
    const int *p;
    p=&a;
    printf("value of pointer pointed to first variable:  %d\n",*p);
    p=&b;
    printf("Second value = %d\n", *p); // Displays 20

    return 0;
}
