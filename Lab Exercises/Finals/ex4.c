void checkPalindrome(int n)
{
    int rev=0,remainder,temp_num;
    temp_num = n;
    while(n!=0)
    {
        remainder = n%10;
        rev = rev*10 + remainder;
        n/=10;
    }
    if(temp_num == rev)
    {
        printf("It is a palindrome.\n");
    }
    else
    {
        printf("It is not a palindrome.\n");
    }

}

int main()
{
    int x;
    while(1)
    {
        printf("Enter number:\n ");
        scanf("%d",&x);
        if(x!=0)
        {
            checkPalindrome(x);
        }
        else
        {
            break;
        }
    }
}
