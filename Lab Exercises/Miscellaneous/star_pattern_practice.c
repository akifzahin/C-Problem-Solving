#include <stdio.h>
int main()
{
    int i,j,n,m,x,y,a,b,c,d,e,f;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    printf("Enter the number of columns: ");
    scanf("%d",&m);

    //Floyds Triangle
     for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            e=1;
            f=0;
        }
        else
        {
            e=0;
            f=1;
        }
        for(j=1;j<=i;j++)
        {
            if(j%2==0)
            {
                printf("%d",e);
            }
            else
            {
                printf("%d",f);
            }
        }
        printf("\n");
    }

    //Rectangle Pattern
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("*");
        }
        printf("\n");
    }

    printf("\n");

    //Hollow Rectangle Pattern
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==1||i==n||j==1||j==n)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    printf("\n");

    //Hollow Rectangle with Right Diagonal
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==1||i==n||j==1||j==n||j==n-i+1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    printf("\n");

    //Right Rhombus Pattern
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        for(j=1;j<=n;j++)
        {
            printf("*");
        }
    printf("\n");

    }

    printf("\n");

    //Parallelogram Pattern
     for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        for(j=1;j<=m;j++)
        {
            printf("*");
        }
    printf("\n");

    }

    printf("\n");

    //Hollow Parallelogram
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        for(j=1;j<=n;j++)
        {
            if(i==1||i==n||j==1||j==n)
            {
                printf("*");
            }

            else
            {
                printf(" ");
            }

        }
    printf("\n");

    }
    printf("\n");

    //Hollow Parallelogram
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        for(j=1;j<=m;j++)
        {
            if(i==1||i==n||j==1||j==m)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
    printf("\n");

    }

    printf("\n");

    //Right Triangle
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");

    //Right Hollow Triangle
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(i==n||j==1||i==1||j==i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    printf("\n");

    //Mirrored Right Triangle
    for(i=1;i<=n;i++)
    {
        for(j=i;j<=n;j++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("*");
        }

       printf("\n");
    }
    printf("\n");

    //Mirrored Right Hollow Triangle
      for(i=1;i<=n;i++)
    {
        for(j=i;j<=n;j++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
           if(i==1||j==i||j==1||i==n)
           {
               printf("*");
           }
            else
            {
                printf(" ");
            }
        }

       printf("\n");
    }
    printf("\n");

    //Inverted Right Triangle
    for(i=1;i<=n;i++)
    {
        for(j=i;j<=n;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");

    //Inverted Right Hollow Triangle
    for(i=1;i<=n;i++)
    {
        for(j=i;j<=n;j++)
        {
            if(j==i||j==n||i==n||i==1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
    printf("\n");


    }
    printf("\n");


//    Mirrored Inverted Right Triangle
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf(" ");
        }
        for(j=i;j<=n;j++)
        {
            printf("*");
        }
        printf("\n");
    }

    printf("\n");

    //Mirrored Inverted Right Hollow Triangle
     for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf(" ");
        }
        for(j=i;j<=n;j++)
        {
            if(i==1||i==n||j==i||j==n)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    printf("\n");


    //Pyramid Star Pattern
    for(i=1;i<=n;i++)
    {
        for(j=i;j<=n;j++)
        {
            printf(" ");
        }
        for(j=1;j<=(2*i-1);j++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");

    //Pyramid Hollow Star Pattern
      for(i=1;i<=n;i++)
    {
        for(j=i;j<=n;j++)
        {
            printf(" ");
        }
        for(j=1;j<=(2*i-1);j++)
        {
            if(i==1||i==n||j==1||j==(2*i-1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }
    printf("\n");


    //Inverted Pyramid Pattern
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf(" ");
        }
        for(j=1;j<=(2*n-(2*i-1));j++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");

    //Inverted Hollow Pyramid Pattern
   for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf(" ");
        }
        for(j=1;j<=(2*n-(2*i-1));j++)
        {
            if(i==1||i==n||j==1||j==(2*n-(2*i-1)))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("\n");


    //Right Half Diamond Star Pattern
    x=1;
    for(i=1;i<=2*n;i++)
    {
        for(j=1;j<=x;j++)
        {
            printf("*");
        }
        if(i<n)
        {
            x++;
        }
        else
        {
            x--;
        }
        printf("\n");
    }
    printf("\n");

    //Mirrored Half Diamond Star Pattern
    y=n-1;
    for(i=1;i<=2*n;i++)
    {
        for(j=1;j<=y;j++)
        {
            printf(" ");
        }
        for(j=1;j<=x;j++)
        {
            printf("*");
        }
        if(i<n)
        {
            x++;
            y--;
        }
        else
        {
            x--;
            y++;
        }
        printf("\n");
    }
    printf("\n");

    //Diamond Star Pattern
    a=1;
    b=n-1;
    for(i=1;i<=2*n;i++)
    {
        for(j=1;j<=b;j++)
        {
            printf(" ");
        }
        for(j=1;j<2*a;j++)
        {
            printf("*");
        }
        if(i<n)
        {
            a++;
            b--;

        }
        else
        {
            a--;
            b++;
        }
        printf("\n");
    }
    printf("\n");

     //Hollow Diamond Star Pattern
    c=1;
    d=n-1;
    for(i=1;i<=2*n;i++)
    {
        for(j=1;j<=d;j++)
        {
            printf(" ");
        }
        for(j=1;j<2*c;j++)
        {
            if(i==1||i==2*n||j==1||j==2*i-1)
            {
                printf("*");
            }
            else
            {
                printf(" ");

            }
        }
        if(i<n)
        {
            c++;
            d--;

        }
        else
        {
            c--;
            d++;
        }
        printf("\n");
    }
    printf("\n");


}
