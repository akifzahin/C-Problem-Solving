#include <stdio.h>
#include <math.h>
int main()
{
    float x;
    printf("Enter the value of x: ");
    scanf("%f", &x);
    float calcu= 5*pow(x,3)-4*pow(x,2)+sqrt(x)+3;
    printf("The value is: %.3f", calcu);




}
