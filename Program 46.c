#include <stdio.h>

int main() {
    float salary, increment, new_salary;
    int rating;

    printf("Enter current salary: ");
    scanf("%f", &salary);

    printf("Enter performance rating (1-5): ");
    scanf("%d", &rating);

    if (rating == 5)
        increment = 0.20 * salary;
    else if (rating == 4)
        increment = 0.15 * salary;
    else if (rating == 3)
        increment = 0.10 * salary;
    else if (rating == 2)
        increment = 0.05 * salary;
    else if (rating == 1)
        increment = 0.02 * salary;
    else {
        printf("Invalid rating!\n");
        increment = 0;
    }

    new_salary = salary + increment;

    printf("Increment amount: %.2f\n", increment);
    printf("New salary: %.2f\n", new_salary);

    return 0;
}
