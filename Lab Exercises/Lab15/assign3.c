#include <stdio.h>
#include<string.h>
void SearchFinder(char s[],char x)
{
    int i,flag=0;
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]==x)
        {
           flag++;

        }

        else
        {
            flag;
        }

    }

    if(flag>0)
    {
        printf("Found.\n");
    }
    else
    {
        printf("Not Found.\n");
    }
}
int main()
{
    char string_1[100],search_key;
    printf("Enter string: ");
    gets(string_1);

    printf("Enter search key character: ");
    scanf("%c",&search_key);

    SearchFinder(string_1,search_key);
}
