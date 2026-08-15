#include <stdio.h>
#include <string.h>

void shortestWord(char str[], char result[]){
    int i=0;
    int j=0;
    int count=0;
    int start=0;
    int min=1000;

    while(str[i]!='\0'){
        while(str[i]==' ')
            i++;
        start=i;
        count=0;
        while(str[i]!=' '&& str[i]!='\0'){
            count++;
            i++;
        }
        if(count<min){
            min=count;
            for(j=0; j<count; j++){
                result[j]=str[start+j];
            }
            result[j]='\0';
        }
    }
}

int main(){
    char str[100];
    char result[100];
    printf("enter a string: ");
    fgets(str, 100, stdin);
    shortestWord(str, result);
    printf("shortest result %s\n",result);
    return 0;
}
