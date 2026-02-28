#include <stdio.h>

int main() {
    int speedLimit;
    int vehicleSpeed;
    printf("Enter the speed limit: ");
    scanf("%d", &speedLimit);
    printf("Enter the vehicle speed: ");
    scanf("%d", &vehicleSpeed);
    if (vehicleSpeed > speedLimit) {
        printf("Warning: You are exceeding the speed limit!\n");
    } else {
        printf("You are within the speed limit.\n");
    }

    
}
