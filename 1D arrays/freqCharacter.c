#include <stdio.h>

char mostFrequent(char str[]){
    int i, j;
    int count;
    int max=0;

    char result=str[0];

    for(int i=0; str[i]!='\0'; i++){
            count=0;

    for(int j=0; str[j]!='\0';j++){

        if(str[i]==str[j]){
            count++;
        }

    }if(count>max){
        max=count;
        result=str[i];
    }
}

        return result;
}
int main(){

    char str[100];
    printf("enter a string: ");
    scanf("%s", str);
    printf("most frequent character is %c\n", mostFrequent(str));

    return 0;

}
