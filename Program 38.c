#include <stdio.h>

int main() {
    float x, y;
    printf("Enter the value of x: ");
    scanf("%f", &x);
    printf("Enter the value of y: ");
    scanf("%f", &y);
    if (x == 0 && y == 0) {
        printf("The point lies at the Origin.\n");
    }
    else if (x == 0) {
        printf("The point lies on the Y-axis.\n");
    }
    else if (y == 0) {
        printf("The point lies on the X-axis.\n");
    }
    else if (x > 0 && y > 0) {
        printf("The point lies in Quadrant I.\n");
    }
    else if (x < 0 && y > 0) {
        printf("The point lies in Quadrant II.\n");
    }
    else if (x < 0 && y < 0) {
        printf("The point lies in Quadrant III.\n");
    }
    else {
        printf("The point lies in Quadrant IV.\n");
    }

    return 0;
}
