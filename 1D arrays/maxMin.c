#include <stdio.h>
int main(){
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n;i++){
        scanf("%d", &arr[i]);

    }
    int maximum = arr[0];
    int minimum = arr[0];
    for(int i=1; i<n; i++){
        if(arr[i]>maximum){
            maximum=arr[i];
        }
        if (arr[i] < minimum) {
            minimum = arr[i];
    }
    }
    printf("Maximum = %d\n", maximum);
    printf("Minimum = %d\n", minimum);

    return 0;

}
