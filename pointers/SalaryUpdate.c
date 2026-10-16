#include <stdio.h>
void updateSalary(float *p, int n){
    int i;
    for(int i=0; i<n; i++){
        *(p+i)=*(p+i)*1.10; // Increases salary by 10%

    }
}
int main(){
    float a[100];
    int n, i, s;
    printf("Enter number of employees: ");
    scanf("%d", &n);

    if (n <= 0 || n > 100)       // Validates array size
    {
        printf("Invalid size\n");
        return 1;
    }
    printf("Enter employee salaries:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%f", &a[i]);      // Reads each salary
    }
    printf("enetr starting position: ");
    scanf("%d", &s);
    if(s<1 || s>n){
        printf("invalid");
        return 1;
    }
    updateSalary(&a[s-1], n-s+1);
    for (i = 0; i < n; i++)
    {
        printf("%.2f ", a[i]);   // Displays all salaries to two decimal places
    }

    return 0;
}
