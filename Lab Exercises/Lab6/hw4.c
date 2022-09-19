#include <stdio.h>
int main() {
   int i,min_num,max_num,common_ratio,sum=0;
     printf("Enter the first number: ");
    scanf("%d",&min_num);
    printf("Enter the last number: ");
    scanf("%d",&max_num);
    printf("Enter the common difference: ");
    scanf("%d",&common_ratio);

    for(i=min_num;i<=max_num;i*=common_ratio)
    {
        sum+=i;
    }
    printf("The sum is = %d.",sum);







}
