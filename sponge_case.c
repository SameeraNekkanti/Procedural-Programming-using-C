#include<stdio.h>
#include <string.h>
#include <ctype.h>


int main(){
    char sentence[100];
    int i;

    printf("enter a sentence: ");
    scanf("%99s", sentence);

    for(i=0; i<strlen(sentence);i++){
        if(i%2==0){
            sentence[i]=toupper(sentence[i]);
        }else{
            sentence[i]=tolower(sentence[i]);
        }
    }

    printf("%s", sentence);
    return 0;
}