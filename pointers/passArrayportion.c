#include <stdio.h>

void display(int *p, int s){
    int i;
    for(i=0; i<s; i++){
        printf("%d ", *(p+i));
    }
}
int main(){
    int arr[100], n, s, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the starting position S: ");
    scanf("%d", &s);
    display(&arr[2], s);
    return 0;
}
