#include <stdio.h>
int main()

/* Exercise 4.10 [C : How to Program, 7th Edition by Paul Deitel, Harvey Deitel]
 Solution provided by Chijioke Ahuchogu     */

{
    int number;
    int i;
    int value;
    int value_count = 0;
    int sum = 0;
    float average;
    
    printf("Enter as many number of values that you want to average: ");
    scanf("%d", &number);
    
    for ( i = 1 ; i <= number ; i++) {
        
        printf("Enter a value: (enter 9999 to exit) ");
        scanf("%d", &value);
       
        
        if ( value == 9999){
            break;// break loop only if value is 9999
        }
        value_count+=1;
        sum += value;
    }
    
    
    average = (float) sum / value_count;
    printf("\n\n");
    
    printf("You entered a total of %d numbers with an average of %.2f  \n\n\n" , value_count , average);
    
}
