#include <stdio.h>
int main()
{
    int n,remainder,base=1,binary_num=0;
    printf("Enter the decimal number: ");
    scanf("%d",&n);

    while(n>0)
    {
        remainder=n%2;
        n/=2;
        binary_num+=(remainder*base);
        base*=10;
    }
    printf("The binary number is = %d",binary_num);
}
