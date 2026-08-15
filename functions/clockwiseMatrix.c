#include <stdio.h>
void rotateCounterClockwise(int mat[][100], int result[][100], int n, int m){
    int i, j;
    for(int i=0; i<n; i++){
        for(j=0; j<m; j++){
            result[m-1-j][i]=mat[i][j];
        }
    }
}
int main(){
    int mat[100][100];
    int result[100][100];
    int n, m;
    int i,j;
    printf("Enter rows and columns: ");
    scanf("%d %d", &n, &m);
     printf("Enter matrix elements:\n");

    for (i = 0; i < n; i++)               // Read each row
    {
        for (j = 0; j < m; j++)           // Read each column
        {
            scanf("%d", &mat[i][j]);      // Store element
        }
    }
    rotateCounterClockwise(mat, result, n, m);
    printf("Rotated matrix:\n");

    for (i = 0; i < m; i++)               // Result has m rows
    {
        for (j = 0; j < n; j++)           // Result has n columns
        {
            printf("%d ", result[i][j]); // Print result
        }

        printf("\n");                     // Move to next row
    }

    return 0;

}
