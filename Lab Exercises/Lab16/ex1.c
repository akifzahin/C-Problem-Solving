#include <stdio.h>
int main()
{
    int i,j,Arr_1[3][5],Arr_2[3][5];

    printf("Enter elements: \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&Arr_1[i][j]);
        }


    }

    printf("Old Matrix: \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",Arr_1[i][j]);
        }

        printf("\n");
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            Arr_2[i][j] = 5*(Arr_1[i][j]);
        }


    }

    printf("New Matrix: \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",Arr_2[i][j]);
        }

        printf("\n");
    }
}

