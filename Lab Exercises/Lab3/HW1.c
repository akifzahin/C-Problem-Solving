#include <stdio.h>
#include <math.h>
int main ()
// Q.Compute the area of a (a) trapezoid and (b) parallelogram. Read necessary inputs from user.
{   // (a) for trapezoid
    float a,b,h;
    printf("Enter the values of the first parallel side, the second parallel side and the height: ");
    scanf("%f %f %f", &a,&b,&h);
    float area_trapezium = ((a+b)*h)/2;
    printf("The area of the trapezoid is: %.3f\n", area_trapezium);
    // (b) for parallelogram
    float x,y;
    printf("Enter the values of the base and the height: ");
    scanf("%f %f", &x,&y);
    float area_parallelogram = x*y;
    printf("The area of the parallelogram is: %.3f", area_parallelogram);









}
