#include <stdio.h>
int main() {
    float float_num;
    printf("Enter the number: ");
    scanf("%f",&float_num);

    int integer_num;
    integer_num = (int)float_num;
    float calculation = float_num - integer_num;

    if (calculation==0) {
        printf("It is an integer.");
    }
    else {
        printf("It is not an integer.");
    }

}
