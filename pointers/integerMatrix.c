#include <stdio.h>
int main(){
    int a[2][3];
    int *p; //integer pointer
    int *row[2];  //array of pointers
    int (*q)[3];  //pointer to an array
    int i, j;

    printf("Enter 6 integers:\n");
    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            scanf("%d", &a[i][j]);

        }
    }
    p=&a[0][0];
    printf("\nUsing Integer Pointer:\n");
    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            printf("address= %p, value=%d\n", (void*)(p+i*3+j),*(p+i*3+j));
        }
    }
    row[0]=a[0];
    row[1]=a[1];
    printf("\nUsing Array of Pointers:\n");
    for(int i=0; i<2;i++){
        for(int j=0; j<3;j++){
            printf("address= %p, value=%d\n", (void *)&row[i][j], row[i][j]);
        }
    }
    q=a;
    printf("\nUsing Pointer to an Array:\n");
    for(i=0; i<2; i++){
        for(j=0; j<3; j++){
            printf("address= %p, value=%d\n", (void *)&q[i][j], q[i][j]);

        }
    }
    return 0;
}
