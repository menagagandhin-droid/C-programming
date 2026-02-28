#include <stdio.h>
#define PI 3.14

int main() {
    int choice;
    float r, h, side, area, volume;

    printf("Choose Shape:\n");
    printf("1. Sphere\n");
    printf("2. Cube\n");
    printf("3. Cylinder\n");
    printf("Enter choice (1-3): ");
    scanf("%d", &choice);

    if(choice == 1) {
        printf("Enter radius: ");
        scanf("%f", &r);

        area = 4 * PI * r * r;
        volume = (4.0/3) * PI * r * r * r;

        printf("Surface Area = %.2f\n", area);
        printf("Volume = %.2f\n", volume);
    }
    else if(choice == 2) {
        printf("Enter side: ");
        scanf("%f", &side);

        area = 6 * side * side;
        volume = side * side * side;

        printf("Surface Area = %.2f\n", area);
        printf("Volume = %.2f\n", volume);
    }
    else if(choice == 3) {
        printf("Enter radius: ");
        scanf("%f", &r);
        printf("Enter height: ");
        scanf("%f", &h);

        area = 2 * PI * r * (r + h);
        volume = PI * r * r * h;

        printf("Surface Area = %.2f\n", area);
        printf("Volume = %.2f\n", volume);
    }
    else {
        printf("Invalid choice");
    }

    return 0;
}
