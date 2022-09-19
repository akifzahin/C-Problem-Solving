#include <stdio.h>
int main()
{
    int i,base,power,sum=1;
    printf("Enter the base: ");
    scanf("%d",&base);
    printf("Enter the power: ");
    scanf("%d",&power);

    for(i=1;i<=power;i++)
    {
        sum*=base;
    }
    printf("%d",sum);



}
