#include <stdio.h>
int main(){
    char str[100];
    char *p;
    int vowels=0;
    printf("enter a string: ");
    scanf("%s", str);
    p=str;
    while(*p!='\0'){
        if(*p=='a'||*p=='e'||*p == 'i' ||
            *p == 'o' || *p == 'u' ||
            *p == 'A' || *p == 'E' || *p == 'I' ||
            *p == 'O' || *p == 'U'){
            vowels++;
            }
            p++;
    }
    printf("voewl count: %d\n", vowels);
    return 0;
}
