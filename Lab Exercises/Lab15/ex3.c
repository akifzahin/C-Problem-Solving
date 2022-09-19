#include <stdio.h>
#include <string.h>

void UniqueCharacter(char string_1[] )
{
    int i,j;
    char string_2[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    char string_3[26] = {0};
    for(i=0;string_1[i]!='\0';i++)
    {
        string_1[i] = tolower(string_1[i]);
        for(j=0;string_2[j]!='\0';j++)
        {
            if(string_1[i]=string_2[j])
            {
                string_3[26]=string_2[j];
            }


        }

    }
    printf("Unique letters: %c",string_3);
    for(j=0;j<=25;j++)
    {
        printf(" %c",string_3);
    }
}








int main()
{
    char mainstring[100];
    printf("Enter a string: ");
    gets(mainstring);
    UniqueCharacter(mainstring);
}
