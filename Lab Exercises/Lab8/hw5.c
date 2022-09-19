#include <stdio.h>
int main()
{
    int i,m,n;
    printf("Enter the first number: ");
    scanf("%d",&m);
    printf("Enter the last number: ");
    scanf("%d",&n);

    if(m%2==0 && n%2==0)
    {
        for(i=m;i<=n;i+=2)
        {
           if(i%3!=0)
           {
               printf("%d ",i);
           }
        }
    }
    else
    {
        for(i=m+1;i<=n-1;i+=2)
        {
           if(i%3!=0)
           {
               printf("%d ",i);
           }
        }


    }
}
