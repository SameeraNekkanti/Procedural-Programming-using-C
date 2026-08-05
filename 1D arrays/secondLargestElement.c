#include <stdio.h>
int main(){
    int n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int largest, secLargest;
    if(arr[0]>arr[1]){
        largest=arr[0];
        secLargest=arr[1];
    }else{
        largest=arr[1];
        secLargest=arr[0];
    }

    for(int i=2; i<n;i++){
        if(arr[i]>largest){
            secLargest=largest;
            largest=arr[i];
        }else if(arr[i]>secLargest && arr[i]!=largest){
            secLargest=arr[i];

        }
    }
    printf("largest= %d\n", largest);
    printf("second largest=%d\n", secLargest);
    return 0;
}