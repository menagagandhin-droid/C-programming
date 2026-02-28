#include <stdio.h>

int main() {
    int num1, num2;
    float result;

    // Get inputs
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Check if both numbers are odd
    if(num1 % 2 != 0 && num2 % 2 != 0) {
        result = (float)(num1 * num2);
        printf("Result = %.4f\n", result);
    } else {
        printf("Both numbers are not odd.\n");
    }

    return 0;
}
