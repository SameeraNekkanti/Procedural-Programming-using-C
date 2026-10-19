#include <stdio.h>
int* findLargest(int arr[], int n){
    int i;
    int *largest=&arr[0];
    for(i=1;i<n;i++){
        if(arr[i]>*largest){
            largest=&arr[i];
        }
    }
    return largest;

}
int* findSmallest(int arr[], int n){
    int i;
    int *smallest=&arr[0];
    for(i=1; i<n; i++){
        if(arr[i]<*smallest){
            smallest=&arr[i];
        }
    }
    return smallest;
}
int main(){
    int arr[100], n, i;
    int *result;
    int *smallresult;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    result=findLargest(arr, n);
    printf("largest= %d\n",*result);
    printf("address= %p\n", (void*)result);
    smallresult=findSmallest(arr, n);
        printf("smallest= %d\n",*smallresult);
    printf("address= %p\n", (void*)smallresult);


    return 0;

}
