#include <stdio.h>
int main()
{   //uses ASCII Table values
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);
    printf("\nThe old character is: %d", ch);

    ch = ch-32;
    printf("\nThe new character is: %c", ch);

    ch = ch+32;
    printf("\nThe new character is: %c", ch);


}
