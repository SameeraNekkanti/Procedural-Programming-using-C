//easy to pronounce?
#include <stdio.h>

int main(){
    int T, N;
    char S[100];
    printf("enter no. of test cases: ");
    scanf("%d", &T);

    while(T--){
        printf("enter length of the string:");
        scanf("%d", &N);
        printf("enter the string: ");
        scanf("%s",S);

        int count=0;
        int hard=0;
        for(int i=0; i<N; i++){
            if(S[i]=='a'||S[i]=='e'|| S[i] == 'i' ||
                S[i] == 'o' || S[i] == 'u'){
                    count=0;
                }else{
                    count++;
                    if(count>=4){
                        hard=1;
                        break;
                    }
                }
        }
        if(hard){
            printf("NO\n");
        }else{
            printf("YES\n");
        }


    }
    return 0;
}