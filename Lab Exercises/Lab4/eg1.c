void main(){
    int x,y,z;
/*     * Reads any two integer values from user     */
printf("Enter three distinct numbers:\n");
scanf("%d %d %d", &x, &y, &z);
 if(x>y & x>z)
    //Check if x is the maximum
    printf("%d is maximum", x);
 else if (y>z)
    //if x is not max then y or z is max; Check which.
    printf("%d is maximum", y);
 else   printf("%d is maximum", z);
 }













