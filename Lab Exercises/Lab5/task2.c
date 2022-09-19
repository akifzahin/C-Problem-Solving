#include <stdio.h>
int main() {
    int num1,num2;
    printf("Enter the first number: ");
    scanf("%d",&num1);
    printf("Enter the second number: ");
    scanf("%d",&num2);

    switch(num1>num2) {
        case 0: printf("%d is bigger.",num2);
        break;
        case 1: printf("%d is bigger.",num1);
        break;
        default: printf("Invalid number!");
        break;





    }




}
