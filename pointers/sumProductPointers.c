#include <stdio.h>
void calculate(int a, int b, int *sum, int *product){
    *sum=a+b;
    *product=a*b;
}
void findQuotient(int a, int b, int *q, int *r){
    *q=a/b;
    *r=a%b;
}
int main(){
    int a, b, sum, product, q, r;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    calculate(a,b, &sum, &product);
    printf("Sum = %d\n", sum);          // Displays the sum
    printf("Product = %d\n", product);
    if(b==0){
        printf("Division by zero is not allowed\n");
        return 1;
    }
    calculate(a, b, &q, &r);
    printf("quotient %d\n remainder is %d\n",q,r);
    return 0;
}
