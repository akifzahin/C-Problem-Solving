#include <stdio.h>
float const PI = 3.14;
float Diameter(float x)
{
    float d = 2*x;
    return d;
}

float Circumference(float x)
{
    float c = 2*PI*x;
    return c;
}

float Area(float x)
{
    float a= PI*x*x;
    return a;
}

int main()
{
    float r;
    printf("Enter the radius: ");
    scanf("%f",&r);

    printf("The diameter is = %.3f \n", Diameter(r));
    printf("The circumference is = %.3f \n", Circumference(r));
    printf("The area is = %.3f \n",Area(r));
}
