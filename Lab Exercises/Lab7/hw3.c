#include <stdio.h>
int main()
{
    int n,i,rev=0,remainder,isPrime=1;
    printf("Enter a number: ");
    scanf("%d",&n);

    while(n != 0)
    {
        remainder = n%10;
        rev = rev*10 + remainder;
        n/=10;
    }
    for(i=2;i<=rev/2;i++)
    {
        if(rev%i==0)
        {
            isPrime=0;
            break;
        }

    }
    if(isPrime==1)
    {
        printf("The reversed number is %d and it is PRIME.",rev);
    }
    else
    {
        printf("The reversed number is %d and it is NOT PRIME.",rev);
    }







}
