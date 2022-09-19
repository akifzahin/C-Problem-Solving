#include <stdio.h>
int main()
{
    int i=1,j,n,count=0,sum=0,isPerfect;
    printf("Enter the value of n: ");
    scanf("%d",&n);

    while(count<n)
    {
        sum=0;

        for(j=1;j<i;j++)
        {
            if(i%j==0)
            {
                sum+=j;
            }
        }
        if(sum==i)
        {
            count++;
            printf("%d \n",i);
            printf("%d ",count);
        }
        i++;
    }


}
