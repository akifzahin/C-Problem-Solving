#include <stdio.h>
#include <string.h>
struct BirthCertificate
{
    char dob[20];
    char name[100],father[100],mother[100];
};

int main()
{
    int i,n,current_day,current_month,current_year;
    //printf("Enter current date: ",&current_day,&current_month,&current_year);

    printf("Enter number of persons: \n");
    scanf("%d",&n);

    struct BirthCertificate s[n];

    printf("Enter information: \n");
    for(i=0;i<n;i++)
    {
        printf("Enter name: ");
        fflush(stdin);
        gets(s[i].name);

        printf("Enter fathers name: ");
        fflush(stdin);
        gets(s[i].father);

        printf("Enter mothers name: ");
        fflush(stdin);
        gets(s[i].mother);

        printf("Enter birth date (DD MM YYYY): ");
        fflush(stdin);
        gets(s[i].dob);
        //scanf("%d %d %d",&s[i].day,&s[i].month,&s[i].year);
        printf("\n");
    }

//    int highest_day = s[0].day;
//    int highest_month = s[0].month;
//    int highest_year = s[0].year;

   // printf("%d %d %d",highest_day,highest_month,highest_year);

    int high,highest = strcmp(s[0].dob,s[1].dob);
    for(i=0;i<n;i++)
    {
        if(highest>0)
        {
//            highest_day = s[i].day;
//            highest_month = s[i].month;
//            highest_year = s[i].year;
            high = s[0].dob;

        }
        else if(highest<0)
        {
            high=s[1].dob;
        }
        else
        {
            high=s[0].dob;
        }
    }
    //printf("Date = %d %d %d ",highest_day,highest_month,highest_year);
    for(i=0;i<n;i++)
    {
        if(high==s[i].dob)
        {
            printf("\n Printing information for oldest: \n");
            printf("Name = %s\n",s[i].name);
            printf("Fathers Name = %s\n",s[i].father);
            printf("Mothers Name = %s\n",s[i].mother);
        }
    }


}
