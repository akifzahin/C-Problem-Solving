#include <stdio.h>
int main()
{
    int i,size,search_key,count=0,index=-1;
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
            index = i;
            count++;
            break;
        }
    }

    while(index>-1)
    {

        for(i=index;i<size-1;i++)
        {
            Arr_1[i]=Arr_1[i+1];

        }

        printf("New Array: \n");
        for(i=0;i<size-1;i++)
        {
            printf("%d\n",Arr_1[i]);

        }
        break;
    if(index==-1)
    {
        printf("Element not found!");
        break;
    }



    }




}
