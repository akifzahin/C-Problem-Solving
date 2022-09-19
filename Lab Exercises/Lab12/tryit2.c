#include <stdio.h>

void NumberVerification (int x)
{
    if(x>0)
    {
        printf("%d is positive. ",x);
    }
    else if(x<0)
    {
        printf("%d is negative. ",x);
    }
    else
    {
        printf("%d is zero.",x);
    }

}
int main()
{
    int n;
    printf("Enter your number: ");
    scanf("%d",&n);

    NumberVerification(n);
}





