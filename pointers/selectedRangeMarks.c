#include <stdio.h>
void processMarks(int *p, int n, int *high, int *low, float *avg){
    int i, sum=0;
    *high=*p;
    *low=*p;
    for(i=0; i<n; i++){
        if(*(p+i)>*high){
            *high=*(p+i);
        }if(*(p+i)<*low){
            *low=*(p+i);
            sum=sum+*(p+i);
        }
        *avg=(float)sum/n;
    }
}
int main(){
    int a[100], n, s, e, i;
    int high, low;
    float avg;
    printf("Enter number of students: ");
    scanf("%d", &n);
    if (n <= 0 || n > 100)        // Checks valid array size
    {
        printf("Invalid size\n");
        return 1;
    }
    printf("Enter marks:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
     printf("Enter positions S and E: ");
    scanf("%d %d", &s, &e);
     if (s < 1 || e > n || s > e)  // Validates positions
    {
        printf("Invalid positions\n");
        return 1;
    }
    processMarks(&a[s-1],e-s+1, &high, &low, &avg);
    printf("Highest mark = %d\n", high);
    printf("Lowest mark = %d\n", low);
    printf("Average mark = %.2f\n", avg);
    return 0;
}
