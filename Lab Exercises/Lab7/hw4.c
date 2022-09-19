#include <stdio.h>
int main()
{
    int n,i,remainder,sum=0,isPrime=1;
    printf("Enter a number: ");
    scanf("%d",&n);

    while(n != 0)
    {
        remainder = n%10;
        sum+=remainder;
        n/=10;

    }

    for(i=2;i<=sum/2;i++)
    {
        if(sum%i==0)
        {
            isPrime=0;
            break;
        }

    }
    if(isPrime==1)
    {
        printf("The sum is %d and it is PRIME.",sum);
    }
    else
    {
        printf("The sum is %d and it is NOT PRIME.",sum);
    }


}
