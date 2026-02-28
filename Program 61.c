#include <stdio.h>
#include <math.h>

int main() {
    int hour, minute;
    double hour_angle, minute_angle, angle;

    printf("Enter hour (0-23): ");
    scanf("%d", &hour);

    printf("Enter minute (0-59): ");
    scanf("%d", &minute);

    // Convert 24-hour to 12-hour format
    hour = hour % 12;

    // Calculate angles
    minute_angle = minute * 6;               // 360/60 = 6
    hour_angle = (hour * 30) + (minute * 0.5);  // 360/12 = 30

    angle = hour_angle - minute_angle;

    if (angle < 0)
        angle = fabs(angle);

    // Adjust angle to 0–360 range
    if (angle > 360)
        angle = fmod(angle, 360);

    printf("Angle between hands: %.2lf degrees\n", angle);

    return 0;
}
