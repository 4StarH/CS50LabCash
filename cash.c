#include <cs50.h>
#include <stdio.h>

int main(void)
{   
  
      int quarters = 0;
      int dimes = 0;
      int nickels = 0;
      int pennies = 0;
      
      float n = get_float("How much change is owed? ");
      
    
      while (n <= 0.0) 
      {
          
        n = get_float("Error, How much change is owed? ");
          
      }
    
    int change = n * 100;
   
    do 
    {
      //counting the number of quarters while subtracting from the balance of change required
      while (change >= 25)
      {    
              change = change - 25;
              quarters++;
      }
      
      //counting the number of dimes while subtracting from the balance of change required  
      while (change < 25 && change >= 10)
      {
          change = change - 10;
          dimes++;    
      }
        
      //counting the number of nickels while subtracting from the balance of change required 
      while (change < 10 && change >= 5)
      {
          
           change = change - 5;
           nickels++;
          
      }
       
      //counting the number of pennies while subtracting from the balance of change required 
      while (change < 5 && change > 0)
      {
          
          change = change - 1;
          pennies++;
          
      }
    
    } while (change > 0);
      
     //when the total value of the change needed to be reinbursed is equal to zero, print out the total number of coins.
     if (change == 0) 
     {
         int numberOfCoins = quarters + dimes + nickels + pennies;
         printf("Your change is %i quarters, %i dimes, %i nickels, and %i pennies.\n for a total of %i coins.\n", quarters, dimes, nickels, pennies, numberOfCoins);
         
     }
      
          
          
}
