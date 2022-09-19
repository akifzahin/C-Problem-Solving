#include <stdio.h>


struct Employee
{
    char name[50];
    char dob[20];
    char start_date[20];
    int salary;

};

int main()
{
    int n,i;
    printf("Enter number of employees: ");
    scanf("%d",&n);

    struct Employee s[n];

    printf("Enter information: \n");
    for(i=0;i<n;i++)
    {
        printf("Name: ");
        fflush(stdin);
        gets(s[i].name);

        printf("D.O.B = ");
        fflush(stdin);
        gets(s[i].dob);

        printf("Starting Date = ");
        fflush(stdin);
        gets(s[i].start_date);

        printf("Salary: ");
        scanf("%d",&s[i].salary);
        printf("\n");
    }

    int highest = s[0].salary;

    for(i=0;i<n;i++)
    {
        if(highest<s[i].salary);
        {
            highest = s[i].salary;
        }
    }

    printf("Highest salary = %d\n",highest);
    for(i=0;i<n;i++)
    {
        if(highest == s[i].salary)
        {
            printf("Name: %s \n",s[i].name);
            printf("DOB: %s\n",s[i].dob);
            printf("Starting Date: %s\n",s[i].start_date);

        }
    }
}

