#include <stdio.h>
int main(){
    int T;
    scanf("%d", &T); 

    while(T--){
        int X, Y,Z;
        scanf("%d %d %d", &X, &Y, &Z);
        int timeforLevels=X*Y;
        int breaks=(X-1)/3;
        int totalTime=timeforLevels+(breaks*Z);
        printf("%d\n",totalTime);
    }
    return 0;

}