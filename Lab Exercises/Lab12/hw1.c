#include <stdio.h>

float Factorial(float x)
{
    float i,fact=1,fraction,sum=0.0;
    for(i=1;i<=x;i++)
    {
        fact*=i;
        fraction=1/fact;
        sum+=fraction;
    }
    return sum;
}

int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);

    printf("The sum = %.3f",Factorial(n));
}










