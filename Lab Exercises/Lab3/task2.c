#include <stdio.h>
#include <math.h>
int main() {
    int m,n;
    printf("Enter the value of m and then n: ");
    scanf("%d %d", &m,&n);
    int calculation1 = m*pow(2,n);
    int calculation2 = m<<n;
    int calculation3 = m/(pow(2,n));
    int calculation4 = m>>n;
    printf("The first calculation is: %d", calculation1);
    printf("\nThe second calculation is: %d", calculation2);
    printf("\nThe third calculation is: %d", calculation3);
    printf("\nThe fourth calculation is: %d", calculation4);




}
