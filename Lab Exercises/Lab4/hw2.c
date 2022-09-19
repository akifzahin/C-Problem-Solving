#include <stdio.h>
int main() {
    float a,b,c;
    printf("Enter the three angles of the triangle: ");
    scanf("%f %f %f",&a,&b,&c);
    float sum = a+b+c;
    if (sum==180) {
        printf("The triangle is valid.");
    }
    else {
        printf("The triangle is invalid.");
    }


}
