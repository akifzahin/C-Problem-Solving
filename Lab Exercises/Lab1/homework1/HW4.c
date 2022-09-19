#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter a and b: ");
    scanf("%d %d", &a, &b);
    printf("\n a is %d. b is: %d", a,b);
    //This causes the value to be stored in tmp so that it can be replaced
    int tmp = a;
    a = b;
    b =tmp;

    printf("\nAfter swap");
    printf("\na is %d, b is %d", a,b);




}
