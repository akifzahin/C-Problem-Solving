#include <stdio.h>

int main()
{   float const PI = 3.145;
    printf("Enter your radius: ");
    float radius;
    scanf("%f", &radius);

    float diameter = 2*radius;
    printf("Diameter is: %.2f", diameter);

    float circumference = 2*PI*radius;
    printf("\nCircumference is: %.2f", circumference);

    float area = PI*radius*radius;
    printf("\nArea is: %f", area);




}
