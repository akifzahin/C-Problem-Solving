#include <stdio.h>
int main() {
    int i,n,sum=0;
    printf("Enter a number: ");
    scanf("%d",&n);

    for(i=1;i<=n/2;i++) {
        if(n%i==0){
            sum+=i;
        }
    }

    if(n==sum && n>0)  {
        printf("The number %d is perfect.",n);
    }
    else {
        printf("The number %d is NOT perfect!",n);
    }


}
