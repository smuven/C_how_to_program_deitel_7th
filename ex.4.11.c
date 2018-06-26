# include <stdio.h>
/* Exercise 4.11 [C : How to Program, 7th Edition by Paul Deitel, Harvey Deitel]
 Solution provided by Chijioke Ahuchogu     */

int main()

{

int number , value_count, smallest , counter = 1;
    
    printf("Enter the number of : ");
    scanf("%d",&smallest);
    
    value_count = smallest;
    
    printf("You have %d values left to compare\n\n", smallest - 1);
    
    while ( counter < value_count) {
        printf("Enter the next number: ");
        scanf("%d",&number);
        counter++;
        if ( number < smallest) {
            
            smallest = number;
        }
        
    }// end while loop
    
    printf("The smallest number is %d\n\n" , smallest);
    
    printf("\n\n");
    
}
