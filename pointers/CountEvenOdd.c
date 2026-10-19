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
    int *p;
    int odd=0;
    int even=0;
    for(p=arr; p<arr+n;p++){
        if(*p%2==0){
            even++;
        }else{
            odd++;
        }
    }
    printf("odd count= %d\n",odd);
    printf("even count=%d\n",even);
    return 0;
}
