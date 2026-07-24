#include <stdio.h>
int main(){
    int T;
    printf("enter no. of test cases:");
    scanf("%d",&T );

    while(T--){
        int N;
        printf("enter size of the array: ");
        scanf("%d", &N);

        int A[N];
        for(int i=0; i<N;i++){
            scanf("%d", &A[i]);
        }
        int i;
        for(i=1; i<N;i++){
            if(A[i]<A[i-1]){
                printf("No\n");
                break;
            }
        }
        if(i==N){
            printf("Yes\n");
        }
    }
    return 0;

}