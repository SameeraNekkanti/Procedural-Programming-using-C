#include <stdio.h>
int main(){
    int n;
    int arr[100];
    int count=0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++) {
        int duplicate = 0;
        for(int j=0;j<i;j++){
            if(arr[i]==arr[j]){
                duplicate=1;
                break;
            }
        }
        if (duplicate == 1) {
            continue;
        }
        for(int j=i+1; j<n; j++){
            if(arr[i]==arr[j]){
                count++;
                break;
            }

            }
        }
        printf("Total duplicate elements = %d\n", count);

    return 0;
}
