#include <stdio.h>
#include <math.h>

int main()
{
    float num1;
    printf("Enter a number: ");
    scanf("%f", &num1);

    float cube = pow(num1, 3);
    printf("The cube is %.2f\n", cube);
//     printf("The cube is %.2f", pow(2, 3));

    float root = sqrt(num1);
     printf("The root is %.2f", root);


}
