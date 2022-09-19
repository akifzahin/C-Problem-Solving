#include <stdio.h>
int main () {
    float radius;
    float const PI=3.14;
    printf("Enter the radius: ");
    scanf("%f",&radius);
    float volume = (4/3.0)*PI*pow(radius,3);
    printf("The volume of the sphere is: %.3f",volume);



}
