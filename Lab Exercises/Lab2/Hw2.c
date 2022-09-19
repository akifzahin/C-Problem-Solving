int main()
{   // KEEP VALUE OF b BIGGER THAN a,c
    float a,b,c;
    printf("Enter the values of a, b and c: ");
    scanf("%f %f %f", &a,&b,&c);
    float calcu = ((-b+sqrt(pow(b,2)-4*a*c)))/2*a;
    printf("The answer is: %f", calcu);
}





