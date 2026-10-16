#include <stdio.h>
void normalize(int *p, int n){
    int i, min;
    min=*p;
    for(i=0; i<n; i++){
        if (*(p+i)<min){
            min=*(p+i);
        }
    }
    for(i=0; i<n; i++){
        *(p+i)=*(p+i)-min;
    }
}
int main(){
    int a[100], n, s, e, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    if (n <= 0 || n > 100)        // Checks valid array size
    {
        printf("Invalid size\n");
        return 1;
    }
     printf("Enter array elements:\n");
    for (i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    printf("Enter positions S and E: ");
    scanf("%d %d", &s, &e);
    if(s<1|| e>n||s>e){
        printf("Invalid positions\n");
        return 1;
    }
    normalize(&a[s-1], e-s+1);
    printf("Normalized array:\n");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);       // Prints the entire array

    return 0;

}
