#include <stdio.h>
int main(){
    int n;
    printf("enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("enter elements:\n");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int odd=0;
    int even=0;
    for(int i=0; i<n;i++){
        if (arr[i]%2==0){
            even+=arr[i];
        }else{
            odd+=arr[i];
        }
    }
    printf("odd count= %d\n",odd);
    printf("even count=%d\n",even);
    return 0;
}