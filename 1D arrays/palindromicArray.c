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
    int palindrome=1; //true
    for(int i=0; i<n/2;i++){
        if(arr[i]!=arr[n-i-1]){
            palindrome=0;
            break;
        }
    }if(palindrome==1){
            printf("array is a palindrome");

        }else{
            ("not a palindrome");
        }
    
    return 0;
}