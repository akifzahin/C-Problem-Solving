#include <stdio.h>
#include <ctype.h>
int main()
{
    int i;
    char s[100];
    printf("Enter string: ");
    gets(s);

    for(i=0;s[i]!='\0';i++)
    {
        if(i%2==0)
        {
            s[i]=toupper(s[i]);
        }
        else
        {
            s[i]=tolower(s[i]);
        }
    }
    printf("New String = %s",s);
}
