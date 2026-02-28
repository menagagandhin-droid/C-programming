#include <stdio.h>

int main() {
    int age;
    float height;
    char gender;

    printf("Enter age: ");
    scanf("%d", &age);

    printf("Enter gender (M/F): ");
    scanf(" %c", &gender);

    printf("Enter height: ");
    scanf("%f", &height);

    if (height >= 1.80 || (gender == 'M' && age >= 18))
        printf("Selected\n");
    else
        printf("Not Selected\n");

    return 0;
}
