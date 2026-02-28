#include <stdio.h>
#include <math.h>

int main() {
    int x1, y1, x2, y2;
    int distance;

    printf("Enter current coordinates (x1 y1): ");
    scanf("%d %d", &x1, &y1);

    printf("Enter destination coordinates (x2 y2): ");
    scanf("%d %d", &x2, &y2);

    distance = abs(x2 - x1) + abs(y2 - y1);

    printf("Manhattan Distance: %d\n", distance);

    return 0;
}
