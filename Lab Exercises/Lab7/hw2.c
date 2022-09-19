#include <stdio.h>
int main()
{
    int n,i,rev=0,remainder,original_num;
    printf("Enter a number: ");
    scanf("%d",&n);
    original_num=n;

    while(n != 0)
    {
        remainder = n%10;
        rev = rev*10 + remainder;
        n/=10;
    }

    printf("The reversed number is = %d \n",rev);

    if(rev==original_num)
    {
        printf("The number %d is a palindrome!",original_num);
    }
    else
    {
        printf("The number %d is NOT a palindrome!",original_num);
    }



}

