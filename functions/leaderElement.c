#include <stdio.h>
void findLeaders(int nums[], int n){
    int leaders[100];
    int count=0;
    int i;
    leaders[count]=nums[n-1];
    count++;
    //right to left
    for(int i=n-2; i>=0; i--){
        if(nums[i]>leaders[count-1]){
            leaders[count]=nums[i];
            count++;

        }
    }
    //og order
    for(int i=count-1; i>=0;i--){
        printf("%d ", leaders[i]);
    }
    printf("\n");

}
int main()
{
    int T;
    int n;
    int nums[100];
    int i;

    scanf("%d", &T);
    while (T > 0)
    {
        scanf("%d", &n);

        for (i = 0; i < n; i++)
        {
            scanf("%d", &nums[i]);
        }

        findLeaders(nums, n);

        T--;
    }

    return 0;
}
