#include <stdio.h>
void RoundingNum(float x, int y)
{
    float final_num,power;
    power = pow(10.0,y);
    final_num = (float)((int)(x*power + .5)/power);

    printf("Rounded Number = %f",final_num);
}
int main()
{
    float n;
    int d;
    printf("Enter decimal number: ");
    scanf("%f",&n);
    printf("Enter number of places to round up: ");
    scanf("%d",&d);

    RoundingNum(n,d);

}


