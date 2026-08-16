#include <stdio.h>

/*int main(){
    int i;

    printf("odd numbers: \n");
    i=1;
    while(i<=100){

        printf("%d ",i);
        i+=2;


    }
    printf("even numbers: \n");
    i=2;
    while(i<=100){
        printf("%d ",i);
        i+=2;

    }
    return 0;

}*/
int main(){
    int n;
    int arr[100];
    int even[100]; int odd[100];
    int evenCount = 0, oddCount = 0;
     printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<n; i++){
        if(arr[i]%2==0){
            even[evenCount]=arr[i];
            evenCount++;
        }else{
            odd[oddCount]=arr[i];
            oddCount++;
            }
    }
    printf("Even elements: ");
    for (int i = 0; i < evenCount; i++) {
        printf("%d ", even[i]);
    }

    printf("\nOdd elements: ");
    for (int i = 0; i < oddCount; i++) {
        printf("%d ", odd[i]);
    }

    return 0;


}
