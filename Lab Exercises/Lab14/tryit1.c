#include <stdio.h>
int main()
{
    int i,size,even_count=0,odd_count=0;
    printf("Enter the size of array: ");
    scanf("%d",&size);

    int Arr[size];

    printf("Enter the elements: ");
    for(i=0;i<size;i++)
    {
        scanf("%d",&Arr[i]);
    }

    for (i=0;i<size;i++)
    {
        if(Arr[i]%2==0)
        {
            even_count++;
        }
    }
    printf("Number of even numbers: %d\n",even_count);

    for (i=0;i<size;i++)
    {
        if(Arr[i]%2!=0)
        {
            odd_count++;
        }
    }
    printf("Number of odd numbers: %d\n",odd_count);
}
