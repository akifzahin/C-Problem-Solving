#include <stdio.h>
int main()
{   int x;
    printf("Enter the amount: ");
    scanf("%d",&x);
    int notetype_500 = x/500;
    int rem_500 = x%500;
    int notetype_100 = rem_500/100;
    int rem_100 = rem_500%100;
    int notetype_50 = rem_100/50;
    int rem_50 = rem_100%50;
    int notetype_20 = rem_50/20;
    int rem_20 = rem_20%20;
    int notetype_10 = rem_20/10;
    int rem_10 = rem_20%10;
    int notetype_5 = rem_10/5;
    int rem_5 = rem_10%5;
    int notetype_2 = rem_5/2;
    int rem_2 = rem_5%2;
    int notetype_1 = rem_2/1;
    int rem_1 = rem_2%1;
    printf("500: %d\n", notetype_500);
    printf("100: %d\n", notetype_100);
    printf("50: %d\n", notetype_50);
    printf("20: %d\n", notetype_20);
    printf("10: %d\n", notetype_10);
    printf("5: %d\n", notetype_5);
    printf("2: %d\n", notetype_2);
    printf("1: %d", notetype_1);


}
