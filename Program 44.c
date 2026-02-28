#include <stdio.h>

int main() {
    float purchaseAmount, discountRate, discountAmount;

    printf("Enter purchase amount: ");
    scanf("%f", &purchaseAmount);

    if (purchaseAmount >= 2000) {
        discountRate = 0.20;   // 20%
    }
    else if (purchaseAmount >= 1000) {
        discountRate = 0.15;   // 15%
    }
    else if (purchaseAmount >= 500) {
        discountRate = 0.10;   // 10%
    }
    else {
        discountRate = 0.05;   // 5%
    }

    discountAmount = purchaseAmount * discountRate;

    printf("Discount Rate: %.0f%%\n", discountRate * 100);
    printf("Discount Amount: %.2f\n", discountAmount);

    return 0;
}
