#include <stdio.h>
void main()
{
    int n, i,rev=0,remainder;
    printf("Enter any number to print in words: ");
    scanf("%d", &n);

    while(n!=0)
    {
        remainder = n%10;
        rev = rev*10 + remainder;
        n/=10;
    }

    while(rev!=0)
    {
        switch(rev%10)  {
            case 0: printf("Zero "); break;
            case 1: printf("One "); break;
            case 2: printf("Two "); break;
            case 3: printf("Three "); break;
            case 4: printf("Four "); break;
            case 5: printf("Five "); break;
            case 6: printf("Six "); break;
            case 7: printf("Seven "); break;
            case 8: printf("Eight "); break;
            case 9: printf("Nine "); break;
        }

    rev= rev/10;
    }

}

