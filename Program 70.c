#include <stdio.h>

int main() {
    float distance;

    printf("Enter the distance: ");
    scanf("%f", &distance);

    if (distance > 1000) {
        // Input is in metres, convert to kilometres
        float km = distance / 1000;
        printf("Distance in kilometres: %.2f km\n", km);
    } else {
        // Input is in centimetres, convert to metres
        float metres = distance / 100;
        printf("Distance in metres: %.2f m\n", metres);
    }

    return 0;
}
