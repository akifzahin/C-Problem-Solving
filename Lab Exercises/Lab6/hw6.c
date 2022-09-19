#include <stdio.h>
int main()
{
    int i,n,r,sum=1;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    printf("Enter the value of r: ");
    scanf("%d",&r);

    for(i=n;i>=n-r+1;i--)
    {
        sum*=i;
    }
    printf("The value of nPr is = %d",sum);
}

