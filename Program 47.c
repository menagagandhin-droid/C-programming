#include <stdio.h>

int main() {
    int age, tickets;
    float price, total, discount;

    printf("Enter age: ");
    scanf("%d", &age);

    printf("Enter number of tickets: ");
    scanf("%d", &tickets);

    // Ticket price based on age
    if (age < 12)
        price = 100;
    else if (age >= 12 && age < 60)
        price = 200;
    else
        price = 150;

    total = price * tickets;

    // Apply 11% discount if tickets > 8
    if (tickets > 8) {
        discount = 0.11 * total;
        total = total - discount;
    }

    printf("Total ticket cost: %.2f\n", total);

    return 0;
}
