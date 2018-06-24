#include <stdio.h>

/* Exercise 3.26
 3 [C : How to Program, 7th Edition by Paul Deitel, Harvey Deitel]
 Solution provided by Chijioke Ahuchogu  */

// Find the two largest integers from a pool of 10 different integers




int main()
{
    int number , largest , secondLargest, counter = 1;
    
    printf("Enter the first number : ");
    scanf("%d",&largest);
    
    
    printf("Enter the next number : ");
    scanf("%d",&number);
    
    if (number > largest) {
        
        secondLargest = largest;
        largest = number;
    }
    
    else {
        secondLargest = number;
    }
    counter = 2;
    
    while (counter < 10) {
        printf("Enter the next number :");
        scanf("%d", &number);
        
        if (number > largest && number > secondLargest) {
            
            secondLargest = largest;
            largest = number;
        }
        
        if (number < largest && number > secondLargest) {
            
            secondLargest = number;
        }
        
        counter = counter + 1;
        
        }
    
    
    printf("\n\n");
    
    printf("The largest number is : %d\n" , largest);
    printf("The second largest number is : %d\n" , secondLargest);

}
    
