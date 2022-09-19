#include <stdio.h>
int main()
{
    int i,n,t1=2,t2=1,temp1=t1,temp2=t2,sum=0;
    printf("Enter n: ");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        sum=t1+t2;
        t1=temp2;
        t2=sum;


    }
    printf("nth term: %d",sum);
}
