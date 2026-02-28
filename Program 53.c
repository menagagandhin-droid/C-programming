#include <stdio.h>

int main() {
    float price, total;
    int quantity;
    char m;

    printf("Enter selling price: ");
    scanf("%f", &price);

    printf("Enter quantity: ");
    scanf("%d", &quantity);

    printf("Enter middleman (A/B/C): ");
    scanf(" %c", &m);

    total = price * quantity;

    if (m == 'A')
        total = total - total * 0.10;
    else if (m == 'B')
        total = total - total * 0.15;
    else if (m == 'C')
        total = total - total * 0.20;

    printf("Total Revenue: %.2f\n", total);

    return 0;
}
