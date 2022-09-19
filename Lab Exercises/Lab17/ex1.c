#include <stdio.h>
struct StudentData
{
    char name[50];
    int roll;
    int ID;
    float CGPA;

};
//void StudentDataFunction(struct StudentData x[],int y)
//{

//}


int main()
{
    int i,n;
    printf("Enter number of students: ");
    scanf("%d",&n);
    struct StudentData s[n];

    printf("\nEnter student information: \n");
    for(i=0;i<n;i++)
    {
        s[i].roll=i+1;
        printf("For roll = %d\n",s[i].roll);

        printf("Enter name: ");
        fflush(stdin);
        gets(s[i].name);


        printf("Enter ID: ");
        scanf("%d",&s[i].ID);

        printf("Enter CGPA: ");
        scanf("%f",&s[i].CGPA);
        printf("\n");
    }

    float highest = s[0].CGPA;
    for(i=0;i<n;i++)
    {
        if(s[i].CGPA>highest)
        {
            highest=s[i].CGPA;
        }
    }

    for(i=0;i<n;i++)
    {
        if(highest == s[i].CGPA)
        {
            printf("\nDisplaying student info with highest CGPA: \n");
            printf("Name: %s\n",s[i].name);
            printf("ID: %d\n",s[i].ID);
            printf("CGPA = %f\n",s[i].CGPA);
        }
    }
}


