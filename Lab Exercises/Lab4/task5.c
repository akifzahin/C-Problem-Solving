//Check if the roots of the equation: ax2+bx+c=0 are real or not. If they are real, then print them; otherwise print “No real root exist.” Read a,b,c from user.
#include <stdio.h>
#include <math.h>
int main() {
float a,b,c;
      printf("Enter the values of a,b and c: ");
      scanf("%f %f %f",&a,&b,&c);

      float discriminant = pow(b,2)-4*a*c;

      if(discriminant<0)
      {
          printf(" ERROR! The discriminant is zero and there is no solution!.");
      }
      else
      {
          float first_calculation = (-b+(sqrt(discriminant)))/2*a;
          float second_calculation = (-b-(sqrt(discriminant)))/2*a;
          printf("The discriminant is = %.0f \n",discriminant);
          printf("The first answer is = %.3f \n",first_calculation);
          printf("The first answer is = %.3f \n",second_calculation);

      }


}
