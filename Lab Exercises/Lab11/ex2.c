#include <stdio.h>
int main()
{
    int m,n,i,j,isPrime,sum=0;
    printf("Enter the value of m: ");
    scanf("%d",&m);
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for(i=m;i<=n;i++)
    {
        isPrime=1;
        for(j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                isPrime=0;
                break;
            }
        }
        if(isPrime==1)
        {
            printf("%d ",i);
            sum+=i;
        }

    }
    printf("\nThe sum is = %d",sum);
}
