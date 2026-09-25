#include <stdio.h>
int main(){
    char a[100];
    char *p;
    int i;
    int vowels=0;
    p=a;

    printf("enter string: ");
    scanf("%s", a);

    for(int i=0; *(p+i)!='\0'; i++){
        if(*(p+i)=='a'||*(p+i)=='e'||*(p+i)=='i'||*(p+i)=='o'||
           *(p + i) == 'u' ||
           *(p + i) == 'A' || *(p + i) == 'E' ||
           *(p + i) == 'I' || *(p + i) == 'O' ||
           *(p + i) == 'U'){
                vowels++;
                *(p+i) = '*';
           }
    }
    printf("\nNumber of vowels = %d\n", vowels);

    printf("Updated array: ");
    for(i=0; *(p+i)!='\0';i++){
        printf("%c", *(p+i));
    }
    return 0;

}
