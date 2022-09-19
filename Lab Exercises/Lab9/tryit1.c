#include <stdio.h>
int main()
{
    int i,j,n,m,num;
    printf("Enter the row number: ");
    scanf("%d",&n);
    printf("Enter the column number: ");
    scanf("%d",&m);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
