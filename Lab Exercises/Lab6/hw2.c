#include <stdio.h>
int main() {
    int i,last_number=80,sum=0;
    for(i=10000;i>=80;i/=5)
    {
        printf("%d\n",i);
        sum+=i;
    }
    printf("The sum = %d ",sum);




}
