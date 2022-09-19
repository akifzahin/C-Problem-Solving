#include <stdio.h>
int main()
{
    int i,n,fact=1,sum=1;
    printf("Enter a number: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        fact*=i;
        sum*=fact;
    }

    printf("The super factorial is: %d",sum);
}
