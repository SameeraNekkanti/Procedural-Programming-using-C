#include <stdio.h>
int main(){
    char a[2][3];
    char *p;
    char *row[2];
    char (*q)[3];
    int i, j;
    printf("Enter 6 characters:\n");
    for(i = 0; i < 2; i++){
        for(j = 0; j < 3; j++){
            scanf(" %c", &a[i][j]);
        }
    }
    p=&a[0][0];
    printf("\nUsing Character Pointer:\n");
    for(i = 0; i < 2; i++){
        for(j = 0; j < 3; j++){
            printf("Address=%p, Value=%c\n",(void *)(p+i*3 +j),*(p +i*3+j));
        }
    }
    row[0]=a[0];
    row[1]=a[1];
    printf("\nUsing Array of Pointers:\n");
    for(i = 0; i < 2; i++){
        for(j = 0; j < 3; j++){
            printf("Address=%p, Value=%c\n",(void *)&row[i][j],row[i][j]);
        }
    }
    q=a;
    for(i = 0; i < 2; i++){
        for(j = 0; j < 3; j++){
                printf("Address=%p, Value=%c\n",(void *)&q[i][j],q[i][j]);
        }
    }
    printf("\nColumn-wise using Pointer to an Array:\n");
    for(j=0; j<3; j++){
        for(i=0; i<2; i++){
            printf("%c ", q[i][j]);

        }
        printf("\n");
    }

    printf("\nColumn-wise using Array of Pointers:\n");
    for(j=0; j<3; j++){
        for(i=0; i<2; i++){
                printf("%c ", row[i][j]);
        }
        printf("\n");
    }
return 0;
}
