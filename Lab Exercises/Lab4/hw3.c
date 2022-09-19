#include <stdio.h>
int main() {
    char ch;
    printf("Enter a character/digit: ");
    scanf("%c",&ch);

    if(ch>='a' && ch<='f') {
        printf("This is a valid hexadecimal character.");
    }
    else if(ch>='A' && ch<='F') {
        printf("This is a valid hexadecimal character.");
    }
    else if(ch>='0' && ch<='9') {
        printf("This is a valid hexadecimal character.");
    }
    else {
        printf("This is an invalid hexadecimal character.");
    }

}
