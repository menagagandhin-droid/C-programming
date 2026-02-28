#include <stdio.h>
#include <math.h>

int main() {
    double base, exponent, result;

    printf("Enter base value: ");
    scanf("%lf", &base);

    printf("Enter exponent value: ");
    scanf("%lf", &exponent);

    result = pow(base, exponent);

    printf("Result: %.2lf\n", result);

    return 0;
}
