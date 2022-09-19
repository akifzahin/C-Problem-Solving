#include <stdio.h>
int main()
{
    int i,nsu_id,isPrime=1,sum=0,count_1=0,count_2=0,remainder_1,remainder_2;
    int original_id = nsu_id;
    printf("Enter your NSU ID - ");
    scanf("%d",&nsu_id);

    //For Prime
    for(i=2;i<=remainder_1/2;i++)
    {
        remainder_1= original_id%10;
        if(remainder_1%i==0)
        {
            isPrime=0;

        }
        nsu_id/10;
    }
    if(isPrime==1)
    {
        count_1++;

    }
    printf("Prime Number = %d ",count_1);

//    //For Perfect
    for(i=1;i<=remainder_2/2;i++)
    {
        remainder_2=original_id%10;
        if(remainder_2%i==0)
        {
            sum+=i;
        }
    if(sum==original_id)
    {
        count_2++;
    }

}
    printf("Perfect Number = %d",count_2);


}
