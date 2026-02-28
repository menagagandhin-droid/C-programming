#include <stdio.h>
int main() {
    float height;
    printf("Enter your height: ");
    scanf("%f", &height);
    if (height < 150) {
        printf("Short");
    }
    else if (height >= 150 && height < 170) {
        printf(" Average height");
    }
    else if (height >= 170 && height < 185) {
        printf(" Tall");
    }
    else {
        printf(" Very Tall");
    }

    
}
