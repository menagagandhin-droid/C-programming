#include <stdio.h>
#include <math.h>

int main() {
    double angle, radian;
    double x, y;
    double newX, newY;
    int direction;

    // Input angle
    printf("Enter angle of rotation (in degrees): ");
    scanf("%lf", &angle);

    // Input direction
    printf("Enter direction (1 for Clockwise, 2 for Counterclockwise): ");
    scanf("%d", &direction);

    // Input coordinates
    printf("Enter initial x coordinate: ");
    scanf("%lf", &x);
    printf("Enter initial y coordinate: ");
    scanf("%lf", &y);

    // Convert degrees to radians
    radian = angle * M_PI / 180.0;

    // If clockwise, make angle negative
    if(direction == 1) {
        radian = -radian;
    }

    // Rotation formula
    newX = x * cos(radian) - y * sin(radian);
    newY = x * sin(radian) + y * cos(radian);

    // Output result
    printf("New coordinates after rotation:\n");
    printf("X = %.4lf\n", newX);
    printf("Y = %.4lf\n", newY);

    return 0;
}
