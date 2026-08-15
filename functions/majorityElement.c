#include <stdio.h>
int majorityElement(int arr[], int n){
    int i, j;
    int count;
    for(int i=0; i<n;i++){
        count=0;
        for(int j=0; j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count>n/2){
            return arr[i];
        }
    }
    return -1;

}
int main(){
    int T;
    int n;
    int arr[100];
    int i;
    scanf("%d", &T);
    while(T>0){
        scanf("%d", &n);
        for(int i=0; i<n; i++){
            scanf("%d", &arr[i]);
        }
        printf("%d\n", majorityElement(arr, n));
        T--;
    }
    return 0;

}
