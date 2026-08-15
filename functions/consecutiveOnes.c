#include <stdio.h>
int findMaxConsecutive(int nums[], int n){
    int i;
    int count=0;
    int max=0;
    for(int i=0; i<n;i++){
        if(nums[i]==1){
            count++;
            if(count>max){
                max=count;
            }
        }else{
        count=0;
        }
    }
    return max;
}
int main(){
    int n;
    int nums[100];
    int i;
    printf("enter size: ");
    scanf("%d", &n);
    printf("entter array: ");
    for(int i=0; i<n;i++){
        scanf("%d", &nums[i]);
    }
    printf("maximum consecutive 1s is %d\n", findMaxConsecutive(nums,n));
    return 0;
}
