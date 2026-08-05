#include <stdio.h>
int main(){
    int n;
    printf("enter size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("enter the elements: ");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int target;
    printf("enter element to search:  ");
    scanf("%d", &target);
    int found=0;
    for(int i=0; i<n;i++){
        if(arr[i]==target){
            printf("element found at index %d",i);
            found=1;
            break;
        }
        }
        if(found==0){
            printf("element not found.");

    }
    return 0;
}
