#include <stdio.h>
#include <math.h>
int main() {
    float x1,x2,y1,y2;
    printf("Enter the value of the first coordinate (x,y): ");
    scanf("%f %f", &x1,&y1);
    printf("Enter the value of the second coordinate (x,y): ");
    scanf("%f %f", &x2,&y2);
    float first_coordinate = (x1+x2)/2.0;
    float second_coordinate = (y1+y2)/2.0;
    printf("The midpoint is: (%.2f,%.2f)", first_coordinate,second_coordinate);



}
