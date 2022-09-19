#include <stdio.h>
int main()
{
    int i;
    float kgs,price,temp_kgs,temp_price;

    while(1)
    {
        printf("\nEnter the weight in kilograms: ");
        scanf("%f",&kgs);
        temp_kgs = kgs;
        temp_price=price;



          if(kgs<0)
        {
            printf("\nInvalid input! Enter a positive number!");
            continue;
        }

        printf("Enter the price of sugar: ");
        scanf("%f",&price);

          if(price<0)
        {
            printf("\nInvalid input! Enter a positive number!");
            continue;
        }


        if(kgs==0)
        {
            printf("Total amount(in kg) = %d\n Total price: %d\n Average price(per kg): %d",kgs,price,price/kgs);
            break;
        }



    }

}
