#include <stdio.h>
int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);

    switch(ch) {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'I':
        case 'O':
        case 'o':
        case 'U':
        case 'u': printf("This is a vowel.");
        break;
        default: printf("This is a consonant.");
        break;




    }


}
