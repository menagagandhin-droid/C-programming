#include <stdio.h>

int main() {
    int month;

    printf("Enter month (1-12): ");
    scanf("%d", &month);

    if (month == 1 || month == 2 || month == 10 || month == 11 || month == 12) {
        printf("Sunrise: 7:00 AM\n");
        printf("Sunset: 5:30 PM\n");
    }
    else if (month == 3) {
        printf("Sunrise: 6:30 AM\n");
        printf("Sunset: 6:00 PM\n");
    }
    else if (month == 4 || month == 5 || month == 6) {
        printf("Sunrise: 6:00 AM\n");
        printf("Sunset: 6:30 PM\n");
    }
    else if (month == 7 || month == 8 || month == 9) {
        printf("Sunrise: 6:15 AM\n");
        printf("Sunset: 6:15 PM\n");
    }
    else {
        printf("Invalid month!\n");
    }

    return 0;
}
