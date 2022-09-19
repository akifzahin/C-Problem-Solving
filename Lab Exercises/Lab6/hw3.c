#include <stdio.h>
int main() {
int i,first_num,last_num,common_diff,sum=0;
    printf("Enter the first number: ");
    scanf("%d",&first_num);
    printf("Enter the last number: ");
    scanf("%d",&last_num);
    printf("Enter the common difference: ");
    scanf("%d",&common_diff);

    for(i=first_num;i<=last_num;i+=common_diff) {
        sum+=i;
    }

    printf("The sum of %d to %d is = %d\n",first_num,last_num,sum);

}
