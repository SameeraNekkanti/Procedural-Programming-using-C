#include <stdio.h>
int main(){
    int rows, cols;
    printf("enter no. of rows: ");
    scanf("%d", &rows);
    printf("enter no. of cols:");
    scanf("%d", &cols);

    int arr[rows][cols];
    printf("enter the elements:\n");
    for(int i=0; i<rows;i++){
        for(int j=0; j<cols; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    printf("the matrix is:\n");
    for(int i=0; i<rows; i++){
        for(int j=0;j<cols;j++){
            printf("%d ", arr[i][j]);
        }

        printf("\n");
    }
    return 0;
}
