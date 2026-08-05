#include <stdio.h>
#include <string.h>
int main(){
    int T;
    char email[100];
    scanf("%d",&T);
    while(T--){
        scanf("%s", email);
        
        int at=-1;
        for(int i=0; i<strlen(email);i++){
            if(email[i]=='@'){
                at=i;
                break;
            }
        }
        printf("%c",email[0]);

        for(int i=1; i<at-1;i++){
            printf("*");
        }
        printf("%c", email[at-1]);
        for(int i=at;i<strlen(email);i++){
            printf("%c", email[i]);
        }
     

    }
     return 0;
}