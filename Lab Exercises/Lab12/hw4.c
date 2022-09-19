#include <stdio.h>
void ReverseNum(int x)
{
    int remainder,rev=0;
    while(x!=0)
    {
        remainder=x%10;
        rev = rev*10 + remainder;
        x/=10;

    }
     printf("Reversed = %d",rev);
}

int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);

    ReverseNum(n);
}
