#include <stdio.h>
int main() {
    int i,m,n;
    printf("Enter the value of m: ");
    scanf("%d",&m);
    printf("Enter the value of n: ");
    scanf("%d",&n);

    if(m%2==0 && n%2==0) {
        for(i=n;i>=m;i-=2) {
            printf("%d\n",i);
        }
    }

    else {
        for(i=n-1;i>=m;i-=2){
            printf("%d\n",i);
        }
    }


}







