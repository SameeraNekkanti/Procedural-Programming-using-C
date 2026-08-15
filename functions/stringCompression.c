#include <stdio.h>
#include <string.h>

void compressString(char str[]){
    int i=0;
    int count;
    while(str[i]!='\0'){
        count=1;
        while(str[i]==str[i+1])
        {
            count++;
            i++;
        }
        printf("%c%d", str[i], count);
        i++;
    }
    printf("\n");

}
int main(){
    char str[100];
    printf("enter a string: ");
    scanf("%s", str);
    printf("compressed string: ");
    compressString(str);

    return 0;
}
