#include <stdio.h>
int main()
{
    int i,j,rows;
    char ch = 'A';
    printf("Enter the number of rows: ");
    scanf("%d",&rows);

    for(i=1; i<=rows; ++i)
    {
        for(j=1;j<=rows-i; j++)
        {
            printf(" ");
        }

        for(j=0; j<i; j++)
        {

            printf("%c ",ch+j);
        }

        printf("\n");

    }
}

