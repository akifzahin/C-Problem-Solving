//Write a C program to check if an input integer is a multiple of either 2 or 5 but not a multiple of both. E.g. of valid numbers are 4, 6, 8, 12, 14, 15, 16, 25, etc. E.g. of invalid numbers are 1, 3, 7, 9, 10, 20, etc.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);

    if((n%2==0 || n%5==0)&&(n%2==0 && n%5==0))
    {
        printf("This is not a valid number.");
    }
    else if(n%2 != 0 && n%5 != 0)
    {
        printf("This is not a valid number.");
    }
    else
    {
        printf("This is a valid number.");
    }
}
