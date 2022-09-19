#include <stdio.h>
int main() {
 int n1,n2,n3,max,i,lcm=1;
 printf("Enter three numbers: ");
 scanf("%d %d %d",&n1,&n2,&n3);

if (n1>n2 && n1>n3)
 {
    i = max = n1;
 }
else if (n2>n1 && n2>n3)
 {
    i = max = n2;
 }
else
 {
    i = max = n3;
 }
while(1)
{
    if(i%n1==0 && i%n2==0 && i%n3==0)
    {
        lcm=i;
        break;
    }
    i+=max;
}
    printf("LCM of %d,%d and %d is = %d",n1,n2,n3,lcm);












}
