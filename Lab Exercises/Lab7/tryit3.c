#include <stdio.h>
int main() {
    int n,i;
    printf("Enter the value of n: ");
    scanf("%d",&n);

    for(i=1;i<=n/2;i++) {
        if(n%i==0 && i%2 != 0) {

            printf("%d\n",i);

        }
    }




}
