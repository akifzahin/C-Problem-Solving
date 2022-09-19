#include <stdio.h>
int main() {
    int i,n,power;
    i=2;
    printf("Enter the value of n: ");
    scanf("%d",&n);

    while (i<=n) {
        power = pow(i,3);
        printf("%d\n",power);
        i+=3;

    }








}
