#include <stdio.h>

int main(){
    int myList[4]={10, 20, 30, 40};
    double temp=myList[0];
    for(int i=1;i<4;i++){
        myList[i-1]=myList[i];
    }
    myList[4-1]=temp;
    printf("After left rotation: ");

    for (int i = 0; i < 4; i++) {
        printf("%d ", myList[i]);
    }

    return 0;

}
