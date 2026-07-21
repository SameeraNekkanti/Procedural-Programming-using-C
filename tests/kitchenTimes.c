#include <stdio.h>
int main(){
    int T;
    scanf("%d", &T);

    while(T--){
        int N;
        scanf("%d", &N);

        int A[N], B[N];

        for(int i=0; i<N; i++){
            scanf("%d", &A[i]);
        }

        for(int i=0; i<N; i++){
            scanf("%d", &B[i]);
        }

        int count=0;
        if(A[0]>=B[0]){
            count++;

        }
        for(int i=1; i<N;i++){
            int available=A[i]-A[i-1];
            if(available>=B[i]){
                count++;
            }
        }
        printf("%d\n", count);
    }
    return 0;
}