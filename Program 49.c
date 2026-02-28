#include <stdio.h>

int main() {
    float age;

    printf("Enter lion's age (in years): ");
    scanf("%f", &age);

    if (age < 0 || age > 26) {
        printf("Invalid age! Maximum age of lion is 26 years.\n");
    }
    else {
        printf("Lion's Age: %.2f years\n", age);

        if (age <= 1)
            printf("Category: Cub\n");
        else if (age <= 3)
            printf("Category: Juvenile\n");
        else if (age <= 6)
            printf("Category: Subadult\n");
        else if (age <= 10)
            printf("Category: Young Adult\n");
        else
            printf("Category: Old Adult\n");
    }

    return 0;
}
