#include <stdio.h>
struct CricketRuns
{
    char name[50];
    int runs;
}s[5];

int main()
{
    int i;
    for(i=0;i<5;i++)
    {
        printf("Player %d name: ",i+1);
        fflush(stdin);
        gets(s[i].name);

        printf("Enter runs: ");
        scanf("%d",&s[i].runs);

        printf("\n");
    }

    int sum=0;
    for(i=0;i<5;i++)
    {
        sum+=s[i].runs;
    }

    float average = (float)sum/5.0;


    printf("\nPlayers with runs more than the average: \n");
    for(i=0;i<5;i++)
    {
        if(s[i].runs>average)
        {
            printf("Name: %s\n",s[i].name);
            printf("Runs: %d\n",s[i].runs);
        }
    }


}
