#include <stdio.h>

/* Exercise 3.25 [C : How to Program, 7th Edition by Paul Deitel, Harvey Deitel]
 Solution provided by Chijioke Ahuchogu     */

// looping exercise
// The use of # define isn't necessary since it hasn't been learnt in the book, but it's used here for illustration purposes


# define LOWER 3
# define UPPER 15
# define STEP 3

int main()
{
    int a;
    
    printf("A\t\tA+2\t\tA+4\t\tA+6\n\n");
    

    
    for ( a = LOWER; a <= UPPER; a += STEP) {
        printf("%d\t\t%d\t\t%d\t\t%d\n", a, a + 2, a + 4, a + 6);
        
    }
    printf("\n");
}
