#include <stdio.h>
int main()
{
    int n,i,fact_1=1,fact_2=1;
    printf("Enter a number: ");
    scanf("%d",&n);

    //computing (2n)!
    for(i=1;i<=2*n;i++)
    {
        fact_1*=i;
    }

    //computing n!
    for(i=1;i<=n;i++)
    {
        fact_2*=i;
    }
    printf("The quadruple factorial is: %d ",fact_1/fact_2);


}
