#include <stdio.h>

int checkOverWeight(int weight){
    if(weight>23){
        return 1;
    }else{
        return 0;
    }
}

void alertMessage(int status){
    if(status==1){
        printf("Luggage is overweight.");
    }else{
        printf("Luggage weight is within the limit.");
    }
}

int main(){
    int weight;
    int status;
    printf("enter weight: ");
    scanf("%d", &weight);
    status=checkOverWeight(weight);
    alertMessage(status);

    return 0;
}
