#include <stdio.h>

/* Exercise 3.21 [C : How to Program, 7th Edition by Paul Deitel, Harvey Deitel]
 Solution provided by Chijioke Ahuchogu     */
 
 
int main()
{
    int c = 8;
    
    
    printf("This is the original C : %d\n", c);
    
    printf("This is the predecremented C : %d\n", --c);
    
    printf("This is what C now becomes C : %d\n\n\n", c);
 
    

    
    printf("This is now the new C : %d\n", c);
    
    printf("This is the postdecremented C : %d\n", c--);
    
    printf("This is what C now becomes: %d\n", c);
   
}
