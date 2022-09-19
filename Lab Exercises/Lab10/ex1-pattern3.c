int main()
{
    int i,j,rows;
    char ch = 'A';
    int count=1;
    printf("Enter the number of rows: ");
    scanf("%d",&rows);

    for(i=1; i<=rows; ++i)
    {
        for(j=1;j<=rows-i; j++)
        {
            printf(" ");
        }

        for(j=0; j<count; j++)
        {

            printf("%c",ch+j);
        }
        count+=2;
        printf("\n");

    }
}
