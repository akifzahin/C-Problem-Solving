#include <stdio.h>
#include <stdlib.h>

int main()
{ int num1;
  int num2;
  printf("Enter the first number: ");
  scanf("%d", &num1);
  printf("Enter the second number: ");
  scanf("%d", &num2);
  printf("Answer: The addition is %d\n", num1+num2);
  printf("Answer: The subtraction is %d\n", num1-num2);
  printf("Answer: The multiplication is %d\n", num1*num2);
  printf("Answer: The quotient is %d\n", num1/num2);
  printf("Answer: The remainder is %d\n", num1%num2);


    return 0;
}
