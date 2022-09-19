#include <stdio.h>
int main()
{
    int days;
    printf("Enter number of days: ");
    scanf("%d", &days);

    int years = days/365;
    printf("Years: %d\n", years);

    int weeks = (days -years*365)/7;
    printf("Weeks: %d\n", weeks);

    int remdays = days - years*365 - weeks*7;
    printf("Remaining Days: %d", remdays);
}
