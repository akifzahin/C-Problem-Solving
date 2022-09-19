#include <stdio.h>
int main() {
    char ch;
    printf("Enter the first of either Mango, Apple, Banana or Cherry: ");
    scanf(" %c",&ch);

    switch (ch) {
        case 'M':
        case 'm': printf("The price of Mango is Tk.500/kg.");
        break;
        case 'A':
        case 'a': printf("The price of Apple is Tk.250/kg.");
        break;
        case 'B':
        case 'b': printf("The price of Banana is Tk.130/kg.");
        break;
        case 'C':
        case 'c': printf("The price of Cherry is Tk.270/kg.");
        break;
        default: printf("ERROR! Enter a valid fruit name!");
        break;

    }


}
