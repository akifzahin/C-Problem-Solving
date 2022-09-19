#include <stdio.h>
int main()
{
    int i,j,r,c;
    printf("Enter rows: ");
    scanf("%d",&r);

    printf("Enter columns: ");
    scanf("%d",&c);

    int Arr_1[r][c],sum=0;

    printf("Enter elements: \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&Arr_1[i][j]);
        }
    }

    printf("The Array: \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%10d",Arr_1[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(Arr_1[i][j]%2==0)
            {
                sum+=Arr_1[i][j];
            }
        }
    }
    printf("Sum of even numbers: %d",sum);
}
