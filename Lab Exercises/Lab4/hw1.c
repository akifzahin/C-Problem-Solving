#include <stdio.h>
int main () {
    float a,b,c;
    printf("Enter the values of the three sides: ");
    scanf("%f %f %f",&a,&b,&c);

    if(a+b>c && a+c>b && b+c>a) {
        printf("The triangle is valid.");
    }
    else {
        printf("The triangle is invalid.");
    }
}
