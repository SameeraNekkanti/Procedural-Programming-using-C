#include <stdio.h>
float calculateBill(int units) {
    float amount;

    if (units <= 100) {
        amount = units * 1.5;
    }
    else if (units <= 300) {
        amount = (100 * 1.5) + ((units - 100) * 2);
    }
    else {
        amount = (100 * 1.5) +
                 (200 * 2) +
                 ((units - 300) * 3);
    }

    return amount;
}
void displayBill(float amount) {
    printf("Total Bill = %.2f", amount);
}


int main(){
    int units;
    float bill;
    printf("Enter units consumed: ");
    scanf("%d", &units);
    bill = calculateBill(units);
    displayBill(bill);
    return 0;
}
