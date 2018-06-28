#include <stdio.h>
#include <math.h>

/* Exercise 4.15
 3 [C : How to Program, 7th Edition by Paul Deitel, Harvey Deitel]
 Solution provided by Chijioke Ahuchogu     */

// Modified interest rate problem

int main()
{

    double amount;
    double principal = 1000.0;
    double rate;
    unsigned int year;
    
   
    
    for ( rate = 0.05 ; rate <= .10 ; rate = rate + .01 ) {
        
        printf("Interest rate: %.2f\n\n", rate);
        printf("%4s%21s\n", "Year" , "Amount on deposit");
        for( year = 1; year <= 10; ++year){
                
                amount = principal * pow(1.0 + rate,year);
                
                printf("%4u%21.2f\n", year , amount);
            }// exits inner for loop
        printf("\n\n");
    } // exits outer for loop
    printf("\n\n");
}
