#include <stdio.h>
void CountFinder(int s[],int x,int y)
{
    int i,flag=0,count=0;
    for(i=0;i<x;i++)
    {
        if(y==s[i])
        {
            flag++;
            count++;
        }
        else
        {
            flag;
        }
    }

    if(flag>0)
    {
        printf(" %d appears %d times.",y,count);
    }
    else
    {
        printf("Not Found.");
    }
}

int main()
{
    int i,size,search_key;
    printf("Enter size: ");
    scanf("%d",&size);

    int Arr_1[size];

    printf("Enter elements: \n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&Arr_1[i]);
    }

    printf("Enter search key: ");
    scanf("%d",&search_key);

    CountFinder(Arr_1,size,search_key);
}
