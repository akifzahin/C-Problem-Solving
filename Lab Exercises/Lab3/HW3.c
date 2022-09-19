#include <stdio.h>
#include <math.h>
int main() //Q.Read the lengths of base and height of a right angle triangle. Then compute the length of its hypotenuse using Pythagorean theorem.
{
    float a,b;
    printf("Enter the values of the base first then the height: ");
    scanf("%f %f", &a,&b);
    float hypo = sqrt(pow(a, 2)+ pow(b,2));
    printf("The hypotenuse is: %.3f", hypo);



}
