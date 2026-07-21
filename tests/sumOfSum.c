#include <stdio.h>
int main(){
    int T;
    scanf("%d", &T);  
    while(T--){
        int D, N;
        scanf("%d %d", &D, &N);

        while(D--){
            int sum=0;
            for(int i=1; i<=N;i++){
                sum+=i;
            }
            N=sum;
        }
        printf("%d\n", N);
    }
    return 0;

}