
#include <stdio.h>

/* Exercise 3.40 [C : How to Program, 7th Edition by Paul Deitel, Harvey Deitel]
 Solution provided by Chijioke Ahuchogu     */

// Multiples of 2 with an infinite loop



int main()
{

    int i = 1;
    
    while ( i > 0) {
        
        printf("%d\n", 2*i);
        i*=2;
    }
    
    
}

