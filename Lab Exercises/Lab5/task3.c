#include <stdio.h>
int main() {
    float num1,num2;
    char function;

    printf("Enter a number: ");
    scanf("%f",&num1);
    printf("Enter a operator (+,-,*,/): ");
    scanf(" %c",&function);
    printf("Enter another number: ");
    scanf("%f",&num2);

    switch (function) {
        case '+': printf("The answer is %.2f",num1+num2);
        break;
        case '-': printf("The answer is %.2f",num1-num2);
        break;
        case '*': printf("The answer is %.2f",num1*num2);
        break;
        case '/': printf("The answer is %.2f",num1/num2);
        break;
        default: printf("ERROR!. Invalid operator.");
        break;

    }

}
