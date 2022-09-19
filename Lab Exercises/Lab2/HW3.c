#include <stdio.h>
int main()
{
    float const PI = 3.14;
    float length;
    printf("Enter the length of cube: ");
    scanf("%f", &length);
    float calcu1 = pow(length, 3);
    printf("The volume of cube is: %.2f\n", calcu1);

    float height;
    float radius;
    printf("Enter the height and radius: ");
    scanf("%f %f", &height, &radius);
    float calcu2 = PI*(pow(radius,2))*height;
    printf("The volume of the cylinder is: %.2f", calcu2);






}
