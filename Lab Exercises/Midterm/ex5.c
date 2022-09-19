#include <stdio.h>
int main()
{
    int i,j,row_number;
    printf("Enter the number of rows: ");
    scanf("%d",&row_number);

     for(i=1;i<=row_number;i++)
    {
        for(j=i;j<=row_number;j++)
        {
            printf(" ");
        }
        for(j=1;j<=(2*i-1);j++)
        {
            if(i==1||i==row_number||j==1||j==(2*i-1))
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
