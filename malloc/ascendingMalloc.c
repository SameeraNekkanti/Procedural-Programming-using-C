#include <stdio.h>
#include <stdlib.h>
int main(){
    int n, i, j, temp;
    int *arr;
    printf("enter no. of elements: ");
    scanf("%d", &n);
    if(n<=0){
        printf("invalid");
        return 0;
    }
    arr=(int *)malloc(n*sizeof(int));
    if(arr==NULL){
        printf("malloc failed");
        return 1;
    }
     printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for(i=0; i<n-1; i++){
        for(j=0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j + 1] = temp;
            }
        }
    }
     printf("Sorted array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    free(arr);
    return 0;
}
