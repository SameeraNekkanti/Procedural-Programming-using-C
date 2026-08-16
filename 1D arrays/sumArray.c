#include <stdio.h>
int main(){

    int n;
    int sum=0;


    scanf("%d", &n);
    int arr[n];
    for(int i=1; i<=n;i++){
        scanf("%d", &arr[i]);

    }
    for(int i=0; i<=n; i++){
        sum+=arr[i];
    }
    printf("sum is: %d\n ", sum);
    return 0;
}
