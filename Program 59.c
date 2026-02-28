#include <stdio.h>

int main() {
    int choice;
    float radius, height, baseArea, volume;

    printf("Select Shape:\n");
    printf("1. Cone\n");
    printf("2. Pyramid\n");
    printf("3. Prism\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    switch(choice) {
        case 1: // Cone
            printf("Enter radius: ");
            scanf("%f", &radius);
            printf("Enter height: ");
            scanf("%f", &height);

            volume = (1.0/3) * 3.14159 * radius * radius * height;
            printf("Volume of Cone = %.2f\n", volume);
            break;

        case 2: // Pyramid
            printf("Enter base area: ");
            scanf("%f", &baseArea);
            printf("Enter height: ");
            scanf("%f", &height);

            volume = (1.0/3) * baseArea * height;
            printf("Volume of Pyramid = %.2f\n", volume);
            break;

        case 3: // Prism
            printf("Enter base area: ");
            scanf("%f", &baseArea);
            printf("Enter height: ");
            scanf("%f", &height);

            volume = baseArea * height;
            printf("Volume of Prism = %.2f\n", volume);
            break;

        default:
            printf("Invalid choice\n");
    }

    return 0;
}
