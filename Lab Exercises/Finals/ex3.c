#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter rows: ");
    scanf("%d", &n);

    //Triangle
    for(i=1; i<=n; i++)
    {
        for(j=i;j<=n; j++)
        {
            printf(" ");
        }
        for(j=1; j<=(2*i-1); j++)
        {
            printf("*");

        }

        printf("\n");

    }
    //Half Triangle
    for(i=3; i<=n; i++)
    {
        for(j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        for(j=1;j<=(2*i-1);j++)
        {
            printf("*");
        }
        printf("\n");
    }

    //Rectangle
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-2;j++)
        {
            printf(" ");
        }

        printf("***\n");
    }


}
