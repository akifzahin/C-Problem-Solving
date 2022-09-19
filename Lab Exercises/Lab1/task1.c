#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter a b c: ");
    scanf("%d %d %d", &a, &b, &c);

    int temp1 = a;
    int temp2 = b;
    int temp3 = c;

    b = temp1;
    c = temp2;
    a = temp3;

    printf("a,b,c : %d,%d,%d", a,b,c);

}
