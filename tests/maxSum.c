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
        int first, second;

        if(A[0]>A[1]){
            first=A[0];
            second=A[1];
        }else{
            first=A[1];
            second=A[0];
        }
        for(int i=2; i<N;i++){
            if(A[i]>first){
                if(A[i]!=first){
                    second=first;
                    first=A[i];
                }
            }else if(A[i]!=first && A[i]>second){
                second=A[i];

            }
        }
        printf("%d\n",first+second);
    }
    return 0;

}