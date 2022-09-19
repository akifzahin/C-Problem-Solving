#include <stdio.h>

int SeriesSum(int x)
{
    int i,power,sum = 0;
    for(i=1;i<=x;i++)
    {
        power = pow(i,2);
        sum+=power;
    }
    return sum;
}

int main()
{
    int N;
    printf("Enter the value of N: ");
    scanf("%d",&N);

    printf("The sum is = %d", SeriesSum(N));
}

