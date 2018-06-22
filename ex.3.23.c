
#include <stdio.h>

/* Exercise 3.23 [C : How to Program, 7th Edition by Paul Deitel, Harvey Deitel]
 Solution provided by Chijioke Ahuchogu     */

// largest number exercise



int main()
{
    int number = 0, counter = 1, largest = 0;
    
    printf("Enter any number : ");
    scanf("%d", &largest);
    counter +=1 ;
    
    while ( counter <=10) {
        
        printf("Enter any number : ");
        scanf("%d", &number);
        
        if ( number > largest) {
            
            largest = number ;
        }
        
        counter++;
        
    }
    
    printf( "The largest number is %d\n" ,largest);
    
}
