#include <stdio.h>
int main(){
    int n;
    int arr[100];
    int pos;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter position to delete: ");
    scanf("%d", &pos);
    if(pos<1 || pos>n){
        printf("Invalid position\n");
    }else{
        for(int i=pos-1;i<n-1;i++ ){
            arr[i]=arr[i+1];
        }
        n--;

    printf("Array after deletion: ");

        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}


