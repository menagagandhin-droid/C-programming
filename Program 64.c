#include <stdio.h>

int main() {
    int frequency;

    printf("Enter frequency in Hertz: ");
    scanf("%d", &frequency);

    printf("Frequency: %.2f Hz\n", (double)frequency);

    if (frequency < 20)
        printf("Category: Infrasound\n");
    else if (frequency <= 20000)
        printf("Category: Audible Sound\n");
    else
        printf("Category: Ultrasound\n");

    return 0;
}
