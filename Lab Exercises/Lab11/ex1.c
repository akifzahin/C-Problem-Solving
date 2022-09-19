#include <stdio.h>
int main()
{
    int i,j,n,isPrime;
    printf("Enter the value of n: ");
    scanf("%d",&n);

    for(i=n;i>=2;i--)
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
        }


    }
}
