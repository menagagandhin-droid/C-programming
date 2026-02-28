#include <stdio.h>

int main() {
    char size, fuel;
    int purpose;

    printf("Enter size (S/M/L): ");
    scanf(" %c", &size);

    printf("Enter fuel (G/D/E): ");
    scanf(" %c", &fuel);

    printf("Enter purpose (1/2/3): ");
    scanf("%d", &purpose);

    if (size=='S') printf("Small\n");
    else if (size=='M') printf("Medium\n");
    else if (size=='L') printf("Large\n");
    else printf("Invalid size\n");

    if (fuel=='G') printf("Gasoline\n");
    else if (fuel=='D') printf("Diesel\n");
    else if (fuel=='E') printf("Electric\n");
    else printf("Invalid fuel\n");

    if (purpose==1) printf("Commercial\n");
    else if (purpose==2) printf("Public\n");
    else if (purpose==3) printf("Personal\n");
    else printf("Invalid purpose\n");

    return 0;
}
