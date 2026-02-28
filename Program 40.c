#include <stdio.h>

int main() {
    int quantity;
    float pricePerItem, totalCost, discount = 0, finalAmount;

    printf("Enter quantity of items: ");
    scanf("%d", &quantity);

    printf("Enter price per item: ");
    scanf("%f", &pricePerItem);

    totalCost = quantity * pricePerItem;

    if (totalCost >= 1000) {
        discount = totalCost * 0.20;   // 20% discount
    } else if (totalCost >= 500) {
        discount = totalCost * 0.10;   // 10% discount
    } else if (totalCost >= 200) {
        discount = totalCost * 0.05;   // 5% discount
    }

    finalAmount = totalCost - discount;

    printf("Total Cost: %.2f\n", totalCost);
    printf("Discount: %.2f\n", discount);
    printf("Final Amount to Pay: %.2f\n", finalAmount);

    return 0;
}
