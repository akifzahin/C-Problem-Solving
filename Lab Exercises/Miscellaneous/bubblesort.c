#include <stdio.h>
int main()
{
    int n;
    printf("Enter array elements: ");
    scanf("%d",&n);
    int arr[n];

    int i;
    printf("Enter elements: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    int j,temp;
    for(i=0; i<n-1; i++)
    {
        for(j=0;j<n-i-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("Sorted Array: \n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

}
