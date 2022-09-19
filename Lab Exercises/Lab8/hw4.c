//1.	Write a C program to compute the sum of the series: 1/1! + 1/2! + 1/3! + … + 1/n! where n is an input.
#include <stdio.h>
int main()
{
    float n,i,sum=0,fact=1,fraction;
    printf("Enter the value of n: ");
    scanf("%f",&n);

    for(i=1;i<=n;i++)
    {
        fact*=i;
        fraction=1/fact;
        sum+=fraction;
    }
    printf("The sum = %.3f",sum);



}

