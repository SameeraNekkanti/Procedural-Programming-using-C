#include <stdio.h>
int calculateTotal(int m1, int m2, int m3){
    return m1+m2+m3;
}
void checkStatus(int total){
    if(total>=120){
        printf("pass");
    }else{
        printf("fail");
        }
}

int main(){
    int total;
    int m1, m2, m3;
    printf("enter marks for subject 1:");
    scanf("%d", &m1);
    printf("enter marks for subject 2: ");
    scanf("%d", &m2);
    printf("enter marks for subject 3: ");
    scanf("%d", &m3);
    total=calculateTotal(m1,m2,m3);
    printf("Total = %d\n", total);
    checkStatus(total);
    return 0;
}
