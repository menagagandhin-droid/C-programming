#include <stdio.h>

int isLeapYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        return 1;
    return 0;
}

int main() {
    int day, month, year;
    int daysInMonth[] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int i, quarterStart, daysPassed = 0;

    printf("Enter date (DD MM YYYY): ");
    scanf("%d %d %d", &day, &month, &year);

    // Leap year adjustment
    if (isLeapYear(year))
        daysInMonth[1] = 29;

    // Validate month
    if (month < 1 || month > 12) {
        printf("Invalid month!\n");
        return 0;
    }

    // Validate day
    if (day < 1 || day > daysInMonth[month - 1]) {
        printf("Invalid day!\n");
        return 0;
    }

    // Determine Quarter
    if (month >= 1 && month <= 3) {
        printf("Quarter: Q1 (Jan-Mar)\n");
        quarterStart = 1;
    }
    else if (month >= 4 && month <= 6) {
        printf("Quarter: Q2 (Apr-Jun)\n");
        quarterStart = 4;
    }
    else if (month >= 7 && month <= 9) {
        printf("Quarter: Q3 (Jul-Sep)\n");
        quarterStart = 7;
    }
    else {
        printf("Quarter: Q4 (Oct-Dec)\n");
        quarterStart = 10;
    }

    // Calculate days passed in quarter
    for (i = quarterStart; i < month; i++) {
        daysPassed += daysInMonth[i - 1];
    }
    daysPassed += day;

    printf("Days passed in this quarter: %d\n", daysPassed);

    // Determine Season
    if ((month == 3 && day >= 1) || (month == 4) || (month == 5) || (month == 6 && day == 0)) {
        printf("Season: Spring\n");
    }
    if ((month == 6 && day >= 1) || (month == 7) || (month == 8)) {
        printf("Season: Summer\n");
    }
    if ((month == 9 && day >= 1) || (month == 10) || (month == 11)) {
        printf("Season: Autumn\n");
    }
    if ((month == 12 && day >= 1) || (month == 1) || (month == 2)) {
        printf("Season: Winter\n");
    }

    return 0;
}
