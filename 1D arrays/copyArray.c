#include <stdio.h>
#include <string.h>
int main(){
    char arr[100];
    char copy[100];
    printf("Enter a string: ");
    scanf("%s", arr);
    strcpy(copy, arr);
    printf("Original array: %s\n", arr);
    printf("Copied array: %s\n", copy);
    return 0;

}
