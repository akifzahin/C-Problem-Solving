#include <stdio.h>
int main()
{
    int i,r,n,fact_1=1,fact_2=1,fact_3=1;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    printf("Enter the value of r: ");
    scanf("%d",&r);

    if(r<n)
    {
    //compute n!
        for(i=1;i<=n;i++)
        {
            fact_1*=i;
        }
    //compute (n-r)!
        for(i=1;i<=n-r;i++)
        {
            fact_2*=i;
        }
    //compute r!
        for(i=1;i<=r;i++)
        {
            fact_3*=i;
        }
        printf("The nCr is %d",fact_1/(fact_2*fact_3));
    }
    else
    {
        printf(" Warning! The value of r cannot be bigger than the value of n!");
    }

}
