#include <stdio.h>
int main() {
    int i=5,n,sum=0,difference=4,power;
    printf("Enter a number: ");
    scanf("%d",&n);

    while(i<=n)
    {
        power=pow(i,2);
        i = i + (difference+2);
        sum+=power;
        printf("%d\n",power);

    }
   printf("The sum is = %d",sum);



}
