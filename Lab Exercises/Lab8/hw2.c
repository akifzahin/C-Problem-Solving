#include <stdio.h>
int main()
{
    int n,i,remainder,sum=0,base=1,binary_num=n;
    printf("Enter the number in Binary: ");
    scanf("%d",&n);

    while(n>0)
    {
        remainder=n%10;
        n/=10;
        sum+=(remainder*base);
        base*=2;


    }
    printf("The decimal number is = %d",sum);


}
