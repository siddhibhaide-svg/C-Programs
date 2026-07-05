#include <stdio.h>

int main() {
    int year, month, daysinmonth, startday, i, day,c;
    do{
    printf("Enter year: ");
    scanf("%d", &year);
    printf("Enter month (1-12): ");
    scanf("%d", &month);
    
    printf("\n========== CALENDAR ==========\n");

    // 1. Determine days in the selected month
    if (month == 2) {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
            daysinmonth = 29;
        else
            daysinmonth = 28;
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11) { // Fixed: Month 11 (Nov) has 30 days, not 12 (Dec)
        daysinmonth = 30;
    }
    else {
        daysinmonth = 31;
    }

    // 2. Calculate the starting day of the month (Zeller's Congruence / Sakamoto's Algorithm variation)
    int y = year - (14 - month) / 12;
    int x = y + y / 4 - y / 100 + y / 400;
    int m = month + 12 * ((14 - month) / 12) - 2;
    startday = (1 + x + (31 * m) / 12) % 7; // 0 = Sunday, 1 = Monday, etc.

    // 3. Print the calendar headers
    printf(" Sun Mon Tue Wed Thu Fri Sat\n");

    // 4. Print initial offsets for the first week (4 spaces per day for perfect %3d alignment)
    for (i = 0; i < startday; i++) {
        printf("    ");
    }

    // 5. Print the days of the month
    for (day = 1; day <= daysinmonth; day++) {
        printf("%3d ", day);

        // Break line at the end of every Saturday (day grid position is divisible by 7)
        if ((day + startday) % 7 == 0) {
            printf("\n");
        }
    }
    printf("\nDo you want to continue? (1 = Yes, 0 = No): ");
scanf("%d", &c);
    }

    while(c==1);
      
    printf("\nProgram closed successfully.\n");
    
    printf("\n==============================\n");
    return 0;
}

