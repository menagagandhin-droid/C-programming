#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Convert negative number to positive
    if (num < 0) {
        num = -num;
    }

    if (num >= 10000 && num <= 99999) {
        printf("It is a 5-digit number.\n");
    } else {
        printf("It is NOT a 5-digit number.\n");
    }

    return 0;
}
