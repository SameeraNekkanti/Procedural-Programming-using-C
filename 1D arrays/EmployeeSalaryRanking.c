#include <stdio.h>
int main(){
    int n;
    int salary[100];
    int temp;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d", &salary[i]);
    }
    for(int i=0; i<n-1;i++){
        for(int j=0; j<n-i-1; j++){
            if(salary[j]<salary[j+1]){
                temp=salary[j];
                salary[j]=salary[j+1];
                salary[j+1]=temp;
            }
        }
    }
    printf("Salary Ranking:\n");
    for(int i=0; i<n; i++){
        printf("%d\n", salary[i]);
    }
    printf("\nHighest Salary = %d\n", salary[0]);
    printf("Lowest Salary = %d\n", salary[n - 1]);

    return 0;
}
