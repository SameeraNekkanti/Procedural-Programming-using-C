#include <stdio.h>

int decideMode(int temp){
    if(temp<25){
        return 1;
    }else if(temp>=25 && temp<=40){
        return 2;
    }else if(temp>40){
        return 3;
    }else{
        printf("invalid temperature");
    }
}

void displayMode(int mode){
    if (mode == 1) {
        printf("Dispensing cold water.");
    }
    else if (mode == 2) {
        printf("Dispensing normal water.");
    }
    else {
        printf("Dispensing hot water.");
    }

}
int main(){
    int temp;
    int mode;
    printf("enter temperature: ");
    scanf("%d", &temp);
    mode=decideMode(temp);
    displayMode(mode);
    return 0;


}

