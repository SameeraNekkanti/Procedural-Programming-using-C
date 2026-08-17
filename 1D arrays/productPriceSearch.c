#include <stdio.h>
int main(){
    int price;
    int products[100];
    int found=0;
    int n;
    float discount;
    float finalPrice;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
            scanf("%d", &products[i]);

    }
    scanf("%d", &price);
    for(int i=0; i<n; i++){
        if (products[i]==price){
            printf("sample price found at position: %d\n",i+1);
            discount=products[i]*0.10;
            finalPrice=products[i]-discount;

            printf("Original Price = %d\n", products[i]);
            printf("Discount = %.0f\n", discount);
            printf("Final Price = %.0f\n", finalPrice);
            found=1;
            break;
        }
        }if (found == 0){
        printf("Product price not available\n");

    }
    return 0;
}
