#include <stdio.h>
int main(){
    int a=10;
    int *const p=&a;
    printf("Original value = %d\n", *p);
     *p = 50;
      printf("Updated value = %d\n", *p);  // Displays 50

    return 0;
}
