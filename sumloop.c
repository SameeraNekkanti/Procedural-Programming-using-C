#include <stdio.h>
int main(){
    int n, count, sum=0;
    printf("enter the value of n: \n");
    scanf("%d",&n);
    for(count=1;count<=n;++count){
        sum+=count;
    }
    printf("sum=%d",sum);
    return 0;
}