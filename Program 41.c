#include <stdio.h>

int main() {
    float miles, gallons, mpg;

    printf("Enter miles driven: ");
    scanf("%f", &miles);

    printf("Enter gallons used: ");
    scanf("%f", &gallons);

    mpg = miles / gallons;

    printf("MPG: %.2f\n", mpg);

    if (mpg < 15) {
        printf("Classification: Poor\n");
    } else if (mpg < 25) {
        printf("Classification: Average\n");
    } else if (mpg < 35) {
        printf("Classification: Good\n");
    } else {
        printf("Classification: Excellent\n");
    }

    return 0;
}
