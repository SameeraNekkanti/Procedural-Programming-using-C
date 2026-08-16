#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int nums[n];

    for(int i=0; i<n; i++){
        scanf("%d", &nums[i]);
    }

    if(n==0){
        printf("0");
        return 0;
    }

    int k=1; //unique first element
    for(int i=1; i<n; i++){
        if(nums[i]!=nums[k-1]){
            nums[k]=nums[i];
            k++;
        }
    }
    printf("%d\n",k);

    for(int i=0; i<k; i++){
        printf("%d ",nums[i]);
    }

    return 0;
}