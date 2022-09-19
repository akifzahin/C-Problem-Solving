#include <stdio.h>
int main()
{
    int rows,col,i,j;
    printf("Enter rows: ");
    scanf("%d",&rows);
    printf("Enter columns: ");
    scanf("%d",&col);

    int Arr_1[rows][col];

    printf("Enter elements: \n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&Arr_1[i][j]);
        }
    }
    //upper left triangle
    for(i=0;i<=rows;i++)
    {
        for(j=i;j<=rows;j++)
        {
            printf("%d ",Arr_1[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
