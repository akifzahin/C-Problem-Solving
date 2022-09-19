#include <stdio.h>

//Have to return a value
float computeSquare(float x)
{
    float sq;
    sq = pow(x,2);
    return sq;

 }
int evenORodd(int x)
{
    int even = 0,odd = 1;
    if(x%2==0)
    {
       // printf("Its even.");
        return 0;
    }
    else
    {
        //printf("Its odd.")
        return 1;
    }
}

int primeORnot(int x)
{
    int i;
    for(i=2;i<=x/2;i++)
    {
        if(x%i==0)
        {
            return 0;
        }
    }
    return 1;
}
void cubePrint(float x)
{
    float cube;
    cube = pow(x,3);
    printf("%f\n ",cube);
}

    int perfectOrnot(int x)
    {
        int i,sum=0;
        for(i=1;i<=x/2;i++)
        {
            if(x%i==0)
            {
                sum+=i;

            }
        }
        if(sum==x)
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }



 int main()
 {
     float n,result;
     printf("Enter number: ");
     scanf("%f",&n);
     result = computeSquare(n);
     printf("%f\n",result);
    cubePrint(n);

    if(evenORodd(n) == 1)
    {
        printf("its odd\n.");
    }
    else
    {
        printf("Its even\n");
    }
    int isPrime = primeORnot(n);
    if(isPrime==0)
    {
        printf("Not Prime.\n");
    }
    else
    {
        printf("Prime\n");
    }

    int isPerfect = perfectOrnot(n);
    if(isPerfect == 0)
    {
        printf("Its Perfect.\n");
    }

    else
    {
        printf("Its not Perfect.\n");
    }







 }
