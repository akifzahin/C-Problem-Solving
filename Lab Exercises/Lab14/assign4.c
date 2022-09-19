#include <stdio.h>
int main()
{
    int i,size,sum=0;
    printf("Enter the size of array: ");
    scanf("%d",&size);

    int Arr_1[size];

    printf("Enter elements: \n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&Arr_1[i]);
        sum+=Arr_1[i];
    }

    float average = (float)sum/size;
    printf("Average: %.3f\n",average);

    printf("New Array: \n");
    for(i=0;i<size;i++)
    {
        if(Arr_1[i]>average)
        {
            printf("%d\n",Arr_1[i]);
        }
    }

}
