#include <stdio.h>
int main() {
    float radius,side;
    printf("Enter the radius of the circle: ");
    scanf("%f",&radius);
    printf("Enter the value of the side of the square: ");
    scanf("%f",&side);

    if((sqrt(2)*radius)>=side) {
        printf("The square can be placed inside the circle.");
    }
    else{
        printf("The square cannot be placed inside the circle.");
    }

}
