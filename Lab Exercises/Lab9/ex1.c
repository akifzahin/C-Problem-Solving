#include <stdio.h>

int main()
{
    int i, j, n;

    printf("Enter rows: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        //Print leading spaces
        for(j=1; j<=n-i; j++)
          {
            printf(" ");
          }

        //Print stars after spaces
        for(j=1; j<=n; j++)
        {
            if(i==1||i==n||j==1||j==n)
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

