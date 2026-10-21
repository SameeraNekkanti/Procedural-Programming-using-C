#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int search(char **names, char *key, int n){
    int i;
    for(i=0; i<n; i++){
        if(strcmp(names[i], key)==0){
            return i+1;
        }
    }
    return -1;
}
int main(){
    int n, i, pos;
    char key[50];
    char **names;
    printf("enter no. of students: ");
    scanf("%d", &n);
    names=(char **)malloc(n*sizeof(char *));
    if(names==NULL){
        printf("malloc failed");
        return 1;

    }
    for(i=0; i<n; i++){
        names[i]=(char *)malloc(50*sizeof(char));
        if(names[i]==NULL){
            printf("Memory allocation failed");
            return 1;
        }
        printf("Enter name of student %d: ", i + 1);
        scanf("%49s", names[i]);
    }
    printf("Enter name to search: ");
    scanf("%49s", key);
    pos=search(names, key, n);
    if(pos!=-1){
        printf("Name found at position %d", pos);
    }
    else{
        printf("Name not found");
    }
    for(i=0; i<n; i++){
        free(names[i]);
    }
    free(names);
    return 0;
}
