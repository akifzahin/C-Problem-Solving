#include <stdio.h>
#include <string.h>
void VowelCounter(char s[])
{
    int i,count=0;
    for(i=0;s[i]!='\0';i++)
    {
        s[i] = tolower(s[i]);
        if (s[i] == 'a' || s[i] == 'e' ||s[i]== 'i' ||s[i] =='o' ||s[i] =='u')
        {
            count++;
        }
    }
    printf(" Vowels = %d ",count);
}
int main()
{
    char string[100];
    printf(" Enter a string: ");
    gets(string);

    VowelCounter(string);

}
