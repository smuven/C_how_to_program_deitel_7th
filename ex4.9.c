#include <stdio.h>
int main()

/* Exercise 4.9 [C : How to Program, 7th Edition by Paul Deitel, Harvey Deitel]
 Solution provided by Chijioke Ahuchogu     */

{
    
    int number;
    int i;
    int value;
    int sum = 0;
    
    printf("Enter the number of values you want to sum: ");
    scanf("%d", &number);
    
    for ( i = 1 ; i <= number ; i++) {
        
        printf("Enter a value: ");
        scanf("%d", &value);
        sum += value;
    }
    
    printf("\n\n");
    
    printf("You entered a total of %d numbers and they sum up to %d \n" , number , sum);
}
