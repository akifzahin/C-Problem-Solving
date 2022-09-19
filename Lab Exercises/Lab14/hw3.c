#include <stdio.h>
int main()
{
    int i,size;
    printf("Enter the size of array: ");
    scanf("%d",&size);

    int Arr_1[size];

    printf("Enter elements: \n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&Arr_1[i]);
    }

    int max=Arr_1[0];

    for(i=0;i<size;i++)
    {
        if(Arr_1[i]>max)
        {
            max=Arr_1[i];

        }
    }

    int search_key = max;
    for(i=0;i<size;i++)
    {
        if(search_key==Arr_1[i])
        {
            printf("In Iteration %d = %d\n",i,Arr_1[i]);

        }
    }






}
