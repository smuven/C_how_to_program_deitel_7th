#include <stdio.h>

/* Exercise 3.43 [C : How to Program, 7th Edition by Paul Deitel, Harvey Deitel]
 Solution provided by Chijioke Ahuchogu     */

// Sides of a triangle



int main()
{

    int a , b , c ;
    
        printf("Enter the first lenght of a triangle : ");
        scanf("%d",&a);
               
        printf("Enter the second lenght of a triangle : ");
        scanf("%d",&b);
               
        printf("Enter the third lenght of a triangle : ");
        scanf("%d",&c);
    
    
    if (a + b > c) {
        if( b + c > a){
            if ( a + c > b){
                printf( "These 3 sides make up a triangle \n\n\n\n");
            }
            else {
                printf( "These 3 sides do not make up a triangle \n\n\n\n");
            }
            
        }
        else {
            printf( "These 3 sides do not make up a triangle \n\n\n\n");
        }
        
    }
    else {
        printf( "These 3 sides do not make up a triangle \n\n\n\n");
    }
}
