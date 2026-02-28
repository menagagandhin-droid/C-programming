#include <stdio.h>
#include <math.h>

int main() {
    double base, height, ladder;

    printf("Enter base length: ");
    scanf("%lf", &base);

    printf("Enter height length: ");
    scanf("%lf", &height);

    printf("Enter ladder length: ");
    scanf("%lf", &ladder);

    if ((ladder * ladder) == (base * base + height * height))
        printf("The given lengths form a Right Triangle.\n");
    else
        printf("The given lengths do NOT form a Right Triangle.\n");

    return 0;
}
