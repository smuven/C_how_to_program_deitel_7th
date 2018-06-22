include <stdio.h>

/* Exercise 3.24 [C : How to Program, 7th Edition by Paul Deitel, Harvey Deitel]
 Solution provided by Chijioke Ahuchogu     */

// looping exercise


int main()
{
    int n;
    
    printf("N\t\t10*N\t100*N\t1000*N\n\n");
    
    for ( n = 1; n <= 9; n++) {
        printf("%d\t\t%d\t\t%d\t\t%d\n", n, 10*n, 100*n, 1000*n);
        
    }
    for ( n = 10; n <= 10; n++) {
        printf("%d\t\t%d\t\t%d\t%d\n", n, 10*n, 100*n, 1000*n);
        
    }
    printf("\n");
}
