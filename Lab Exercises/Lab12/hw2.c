#include <stdio.h>

int ForPower(int x, int y)
{
    int power = pow(x,y);
    return power;
}
int main()
{
    int first_number,second_number;
    printf("Enter the first number: ");
    scanf("%d",&first_number);
    printf("Enter the second number: ");
    scanf("%d",&second_number);

    printf("The value of a^b = %d", ForPower(first_number,second_number));

}
