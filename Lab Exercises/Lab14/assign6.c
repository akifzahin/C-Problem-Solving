#include <stdio.h>
#include <string.h>

int main()
{
    int i,uppercase_count=0,lowercase_count=0;
    char string_1[100];
    printf("Enter string: ");
    gets(string_1);

    for(i=0;string_1[i]!='\0';i++)
    {
        if(string_1[i]>='A' && string_1[i]<='Z')
        {
            uppercase_count++;
        }
    }
    for(i=0;string_1[i]!='\0';i++)
    {
        if(string_1[i]>='a' && string_1[i]<='z')
        {
            lowercase_count++;
        }
    }

    printf("Capital Letters: %d\n",uppercase_count);
    printf("Small Letter: %d\n",lowercase_count);


}
