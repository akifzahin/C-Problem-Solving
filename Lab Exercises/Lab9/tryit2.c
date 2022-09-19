#include <stdio.h>
int main()
{
    int i,j,m,n;
    printf("Enter the row number: ");
    scanf("%d",&n);
    printf("Enter the column number: ");
    scanf("%d",&m);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            if(i==1||i==n||j==1||j==m)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }



        }
        printf("\n");
    }




}
