#include <stdio.h>
int countOdd(int *p, int n){
    if(n==0){
        return 0;
    }
    if(*p%2!=0){
        return 1+countOdd(p+1, n-1);

    }else{
    return countOdd(p+1, n-1);
    }

}
void calculate(int *p, int n, int *sum, float *avg){
    int i;
    *sum=0;
    for(i=0; i<n; i++){
        *sum=*sum+*(p+i);

    }
    *avg=(float)*sum/n;
}
int main(){
    int a[100], n, i;
    int odd, sum;
    float avg;
    int *p;
    p=a;
    printf("enter number of elemenst: ");
    scanf("%d", &n);
    if(n<=0 ||n>100){
        printf("Invalid array size\n");
        return 1;
    }
    printf("Enter array elements:\n");
    for (i = 0; i < n; i++)  // Repeats for each array element
    {
        scanf("%d", p + i);  // Reads each element using pointer arithmetic
    }
    printf("Array elements: ");  // Displays a heading

    for (i = 0; i < n; i++)  // Traverses the array
    {
        printf("%d ", *(p + i));  // Prints each element using the pointer
    }
    odd=countOdd(p,n);
    printf("no.of odd elements id %d",odd);
    calculate(p, n, &sum, &avg);  // Calculates sum and average using pointers

    printf("\nSum = %d", sum);  // Prints the sum
    printf("\nAverage = %.2f\n", avg);  // Prints the average to 2 decimal places

    return 0;
}
