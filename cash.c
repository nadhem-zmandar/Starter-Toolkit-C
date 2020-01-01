#include <cs50.h>
#include <stdio.h>
#include <math.h>
int main(void)
{    
    
    float change;//amount of money due by the customer
    int count=0;//number of coins to give back
    //getting a positive float from the user
    do{
    change = get_float("change= ");   
     }
    while(change<0);
    //converting the amount due from dollars to cents
    int cents = round (change * 100);
    
    
    while( cents / 25 > 0 )
    {count = count + 1 ;
     cents = cents - 25 ;   
    }
    
    while( cents / 10 > 0)
    {count = count + 1 ;
     cents= cents - 10 ;   
    }
    while( cents / 5 >0)
    { count = count + 1;
      cents = cents - 5 ;   
    }
    count = count + cents ;
    
     printf("%i\n",count)  ; 
}
