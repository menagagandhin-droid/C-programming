#include <stdio.h>

int main() {
    int x, y, z;

    printf("Enter x coordinate: ");
    scanf("%d", &x);

    printf("Enter y coordinate: ");
    scanf("%d", &y);

    printf("Enter z coordinate: ");
    scanf("%d", &z);

    if (x == 0 && y == 0 && z == 0) {
        printf("Location: Origin\n");
    }
    else if (x == 0 && y == 0) {
        printf("Location: Z-axis\n");
    }
    else if (x == 0 && z == 0) {
        printf("Location: Y-axis\n");
    }
    else if (y == 0 && z == 0) {
        printf("Location: X-axis\n");
    }
    else if (x == 0) {
        printf("Location: YZ-plane\n");
    }
    else if (y == 0) {
        printf("Location: XZ-plane\n");
    }
    else if (z == 0) {
        printf("Location: XY-plane\n");
    }
    else {
        printf("Location: General 3D space\n");
    }

    return 0;
}
