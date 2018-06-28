#include <stdio.h>

/* Exercise 4.16
 3 [C : How to Program, 7th Edition by Paul Deitel, Harvey Deitel]
 Solution provided by Chijioke Ahuchogu     */

// Triangle printing problem

int main()
{

    int row;
    int col;
    int spc;
    /*Pattern A */
    for ( row = 1; row <= 10; row++) {
        
        for ( col = 1; col <= row; col++){
            printf("*");
        }
        printf("\n");
    }
        printf("\n");
    
    
    
    /*Pattern B */
    for (row = 10; row >= 1; row--) {
        
        for ( col = row; col >= 1; col--){
            printf("*");
        }
        printf("\n");
    }
        printf("\n");
    
    /*Pattern C */
    for (row = 10; row >= 1; row--) {
        
        spc = 10 - row;
        while (spc>0) {
            
            printf(" ");
            spc = spc - 1;
        }// exits while loop
    
        for ( col = row; col >= 1; col--){
            printf("*");
         }// exits column for loop
        
        printf("\n");
    }// exits outer most for loop
    printf("\n");
    
    /*Pattern D */
    for (row = 1; row <= 10; row++) {
        
        spc = 10 - row;
        while (spc>0) {
            
            printf(" ");
            spc = spc - 1;
        }// exits while loop
        
        for (col = 1; col <= row; col++){
            printf("*");
        }// exits column for loop
        
        printf("\n");
    }// exits outer most for loop
    printf("\n");
    
    return 0;
}


