#include <stdio.h>

int main() {
    int n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements in sorted order:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int key;
    printf("enter element to search: ");
    scanf("%d",&key);
    int low=0;
    int high=n-1;
    int found=0;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==key){
            printf("element found at index %d", mid);
            found=1;
            break;
        }else if(arr[mid]<key){
        low=mid+1;
        }else{
        high=mid-1;
        }
    }
    if(found==0){
        printf("not found");
    }
    return 0;
}
