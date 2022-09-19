#include <stdio.h>

int ForBottomNumber(int x, int y)
{
    int i,j,sum=0,power;
    for(i=-1;i<y;i++)
    {
         power = pow(x,i+1);
         sum+=power;
         printf("power = %d\n",power);
    }

    return sum;
}

int main()
{
    int r,n;
    printf("Enter value of r: ");
    scanf("%d",&r);
    printf("Enter the value of n: ");
    scanf("%d",&n);

    printf("The sum = %d", ForBottomNumber(r,n));
}
