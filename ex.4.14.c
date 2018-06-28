
#include <stdio.h>

/* Exercise 4.14
[C : How to Program, 7th Edition by Paul Deitel, Harvey Deitel]
 Solution provided by Chijioke Ahuchogu  */

// factorials problem





int main()
{
    int i , f ;
    int n ;
    
    for (i = 1; i <= 10; i++){
        n = i;
        f = 1;
        while (n != 0) {
            f = f * n;
            n--;
        }// exits while loop
        printf("%d\t\t%d\n", i, f);
    }// exits for loop
    
     printf("\n\n");
    
    return 0;
}

