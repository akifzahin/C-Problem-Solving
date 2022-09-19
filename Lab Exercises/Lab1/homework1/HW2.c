#include <stdio.h>
#include <stdlib.h>

int main()
{
    double num1;
    double num2;
    double num3;
    float avg;
    printf("Enter the first number: ");
    scanf("%lf", &num1);
    printf("Enter the second number: ");
    scanf("%lf", &num2);
    printf("Enter the third number: ");
    scanf("%lf", &num3);
    avg= (num1+num2+num3)/3;
    printf ("The average is %.1f", avg);



}
