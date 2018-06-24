#include <stdio.h>

/* Exercise 3.45a
 3 [C : How to Program, 7th Edition by Paul Deitel, Harvey Deitel]
 Solution provided by Chijioke Ahuchogu     */

// A program that reads a non negative integer and finds its factorial




int main()
{
    int number , factorial = 1 ;
    
    printf("Input any numper to find n!: ");
    scanf("%d",&number);
    
    if ( number < 0 ) {
        printf("Invalid Input, pls enter any non negative integer to find n! : ");
        scanf("%d",&number);
    }
    
    if ( number == 0 ) {
        factorial = 1;
        printf( "n! is : %d \n" , factorial );
    }
    else {
        while ( number != 1) {
            
            factorial =  factorial  * number ;
            number--;
        }
        
        printf( "n! is : %d \n" , factorial );
    }
}
    
