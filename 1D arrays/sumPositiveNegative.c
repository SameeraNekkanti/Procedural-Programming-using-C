#include <stdio.h>
int main(){
    int n;
    printf("enter size of array:");
    scanf("%d", &n);

    int arr[n];
    printf("enter the elements: \n");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int posSum=0;
    int negSum=0;

    for(int i=0; i<n; i++){
        if(arr[i]>0){
            posSum=posSum+arr[i];
        }else if(arr[i]<0){
            negSum=negSum+arr[i];
        }
    }
    printf("sum of positive numbers: %d\n", posSum);
    printf("sum of negative numbers: %d\n", negSum);
    return 0;
}