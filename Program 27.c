#include <stdio.h>
#include <math.h>

int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
 if (num < 0) {
        printf("Please enter a positive integer only.\n");
        return 0;
    }
    double sqrtNum = sqrt(num);

    // Check if the square root is an integer
    if (sqrtNum == (int)sqrtNum) {
        printf("%d is a perfect square.\n", num);
    } else {
        printf("%d is not a perfect square.\n", num);
    }

    
}
