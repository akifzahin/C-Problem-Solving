#include <stdio.h>
#include <math.h>
int main() //Q.Compute the volume and surface area of a cone. Read the radius and height of the cone from user
{
    float r,h;
    float const PI = 3.14;
    printf("Enter the values of the radius first and then the height: ");
    scanf("%f %f", &r,&h);
    float volume = (PI*r*r*h)/3;
    float surface_area = PI*r*(r+sqrt((r*r)+(h*h)));
    printf("The volume is: %.3f\n", volume);
    printf("The surface area is: %.3f", surface_area);





}
