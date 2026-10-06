#include <stdio.h>

void increaseBy10(int *p){
    *p=*p+10;
}

void SquareNumber( int *p){
    *p=(*p)*(*p);
}
int main(){
    int num;
    printf("enter an integer: ");
    scanf("%d", &num);
    printf("before function call: %d\n", num);
    increaseBy10(&num);
    printf("After function call: %d\n", num);
    SquareNumber(&num);
    printf("After function call: %d\n", num);

    return 0;


}
