#include <stdio.h>
int main()
{
    int i,j,rowA,colA;

    printf("Enter rows of matrix: ");
    scanf("%d",&rowA);

    printf("Enter columns of matrix: ");
    scanf("%d",&colA);

//    printf("Enter rows of second matrix: ");
//    scanf("%d",&rowB);
//
//    printf("Enter columns of second matrix: ");
//    scanf("%d",&colB);

    int Arr_1[rowA][colA],Arr_2[rowA][colA],Arr_3[rowA][colA],Arr_4[rowA][colA];

    printf("Enter elements of first matrix: \n");
    for(i=0;i<rowA;i++)
    {
        for(j=0;j<colA;j++)
        {
            scanf("%d",&Arr_1[i][j]);
        }
    }

    printf("Enter elements of second matrix: \n");
    for(i=0;i<rowA;i++)
    {
        for(j=0;j<colA;j++)
        {
            scanf("%d",&Arr_2[i][j]);
        }
    }

    printf("The first matrix: \n");
    for(i=0;i<rowA;i++)
    {
        for(j=0;j<colA;j++)
        {
            printf("%d ",Arr_1[i][j]);
        }
        printf("\n");
    }

    printf("The second matrix: \n");
    for(i=0;i<rowA;i++)
    {
        for(j=0;j<colA;j++)
        {
            printf("%d ",Arr_2[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<rowA;i++)
    {
        for(j=0;j<colA;j++)
        {
            Arr_3[i][j]=5*(Arr_1[i][j]) + 7*(Arr_2[i][j]);
        }

    }

    for(i=0;i<rowA;i++)
    {
        for(j=0;j<colA;j++)
        {
            Arr_4[i][j]=(Arr_3[i][j])+=9;
        }

    }


    printf("\nNew Array: \n");
    for(i=0;i<rowA;i++)
    {
        for(j=0;j<colA;j++)
        {
            printf("%d ",Arr_4[i][j]);
        }
        printf("\n");
    }
}
