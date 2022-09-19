#include <stdio.h>
int main()
{
    int i,size,search_key,count;
    printf("Enter the size of array: ");
    scanf("%d",&size);

    int Arr_1[size];

    printf("Enter elements: \n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&Arr_1[i]);
    }

    printf("Enter target value: ");
    scanf("%d",&search_key);
    for(i=0;i<size;i++)
    {
        if(search_key==Arr_1[i])
        {
            printf("In Iteration %d = %d\n",i,Arr_1[i]);
            count++;
        }
    }



}
