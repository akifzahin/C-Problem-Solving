#include <stdio.h>
int main() {
    int year;
    printf("Enter a year : ");
    scanf("%d",&year);

    switch(year%4==0 && year%400==0) {
        case 0: printf("This is not a leap year!");
        break;
        case 1: printf("This is a leap year!");
        break;
        default: printf("ERROR! Enter a valid year!");
        break;



    }


}
