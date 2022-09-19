#include <stdio.h>
int main()
{
    int i,size;
    printf("Enter size: ");
    scanf("%d",&size);

    int a[size],b[size],c[size];

    printf("Enter elements: \n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Even elements: \n");
    for(i=0;i<size;i++)
    {
        if(a[i]%2==0)
        {
            printf("%d ",a[i]);
        }
    }

    printf("\nOdd elements: \n");
    for(i=0;i<size;i++)
    {
        if(a[i]%2!=0)
        {
            printf("%d ",a[i]);
        }
    }

}
