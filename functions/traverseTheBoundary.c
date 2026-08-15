#include <stdio.h>
void boundaryTraversal(int mat[][100], int n, int m){
    int i;
    for(int i=0; i<m;i++){
        printf("%d ",mat[0][i]);
    }
    for(int i=1; i<n;i++){
        printf("%d ",mat[i][m-1]);
    }
    for(int i=m-2;i>=0;i--){
        printf("%d ",mat[n-1][i]);

    }
    for(int i=n-2;i>=1;i--){
        printf("%d ", mat[n-1][0]);
    }

    }


int main(){
    int mat[100][100];
    int n,m;
    int i, j;
    printf("enter rows and cols: ");
    scanf("%d %d", &n, &m);
    printf("enter matrix elements: \n");
    for(int i=0; i<n;i++){
        for(int j=0; j<m;j++){
            scanf("%d",&mat[i][j]);
        }
    }
    printf("boundary elements: ");
    boundaryTraversal(mat,n,m);

    return 0;

}
