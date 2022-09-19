#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
int main()
{
//Binary to Octal
    int i,n,digit,sum=0,base=1,remainder;
    printf("Enter Binary: ");
    scanf("%d",&n);

    int OctalBinary[8]={0,1,10,11,100,101,110,111};

    int temp=n;
    while(n>0)
    {
        digit = n%1000;
        while(digit>0)
        {


                remainder=digit%10;
                digit/=10;
                sum+=(remainder*base);
                base*=2;


        }
        n/=1000;
    }

    printf("Octal = %d",sum);











}
//    //Binary to Decimal
//    int n,power,remainder,sum=0,base=1;
//    printf("Enter number in Binary: ");
//    scanf("%d",&n);
//
//
//    while(n>0)
//    {
//        remainder=n%10;
//        n/=10;
//        sum+=(remainder*base);
//        base*=2;
//    }
//    printf("Decimal = %d",sum);








//    int amount;
//    float cost1,cost2,cost3;
//    float calculation;
//    printf("Enter amount: ");
//    scanf("%d",&amount);
//
//    cost1 = 50*0.50*1.2;
//    cost2= 100*0.75*1.2;
//    cost3 = 100*1.2*1.2;
//
//    if(amount<=50)
//    {
//        calculation = 1.2*amount*0.5;
//    }
//    else if (amount<=150)
//    {
//        calculation = cost1 + 1.2*(amount-50)*0.75;
//    }
//
//    else if(amount<=250)
//    {
//        calculation = cost1 + cost2 + 1.2*(amount-150)*1.2;
//    }
//    else
//    {
//        calculation = cost1 + cost2 + cost3 +1.2*(amount-250)*1.5;
//    }
//
//    printf("Total amount = %3f",calculation);

 //    //Binary to Decimal
//    int n,power,remainder,sum=0,base=1;
//    printf("Enter number in Binary: ");
//    scanf("%d",&n);
//
//
//    while(n>0)
//    {
//        remainder=n%10;
//        n/=10;
//        sum+=(remainder*base);
//        base*=2;
//    }
//    printf("Decimal = %d",sum);

