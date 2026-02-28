#include <stdio.h>

int main() {
    float temperature, oilPressure;
    int rpm;

    printf("Enter engine temperature : ");
    scanf("%f", &temperature);

    printf("Enter oil pressure (PSI): ");
    scanf("%f", &oilPressure);

    printf("Enter engine RPM: ");
    scanf("%d", &rpm);

    if (temperature > 75 || oilPressure < 12 || rpm > 7000) {
        printf("Engine Health: Poor\n");
    }
    else if (temperature > 50 || oilPressure < 20 || rpm > 4000) {
        printf("Engine Health: Fair\n");
    }
    else {
        printf("Engine Health: Good\n");
    }

    return 0;
}
