#include <stdio.h>
#include <math.h>
int main() {
    float arc_length,radius;
    printf("Enter the arc length and then radius: ");
    scanf("%f %f",&arc_length, &radius);
    float angle = arc_length/radius;
    printf("The angle in radians is: %.3f", angle);



}
