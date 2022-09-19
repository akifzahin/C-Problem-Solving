#include <stdio.h>
int main()
{
    int num;
    printf("Enter your number: ");
    scanf("%d", &num);

    int last = num % 10;
    printf("The last digit is: %d", last);
}
