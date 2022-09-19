#include <stdio.h>
#include <stdio.h>
void PalindromeCheck(char s[])
{

    int i,size=0;
    char q[100];

    for(i=0;s[i]!='\0';i++)
    {
        size+=1;
    }

    printf("Size of string: %d\n",size);

    int count=size-1;

    for(i=0;i<size;i++)
    {
        q[i]=s[count];
        count-=1;
    }
    q[i]='\0';

    printf("Reversed: ");
    puts(q);


    if(strcmp(s,q)==0)
    {
        printf("It is a palindrome.");
    }
    else
    {
        printf("NOT a palindrome!");
    }


}

int main()
{
    char string_1[100];
    printf("Enter words: ");
    gets(string_1);


    PalindromeCheck(string_1);
}
