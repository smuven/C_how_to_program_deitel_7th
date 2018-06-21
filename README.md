#include <stdio.h>
/* Exercise 3.17  [C : How to Program, 7th Edition by Paul Deitel, Harvey Deitel]
  Solution provided by Chijioke Ahuchogu                                     */

int main() {
 
    float gallons = 0 , miles  = 0, totalGals = 0 , totalMiles = 0;
    
    printf("Enter the gallons used (-1 to end) : ");
    scanf("%f", &gallons);
    
    while (gallons != -1) {
    
    totalGals += gallons;
        
    printf("Enter the miles driven: ");
    scanf("%f", &miles);
    
    totalMiles += miles;
        
    printf("The miles/gallons for this tank was %f\n\n", miles / gallons);
        
    printf("Enter the gallons used (-1 to end): ");
    scanf("%f", &gallons);
    }
    
    printf("\nThe overall average miles/gallon was %f\n", totalMiles / totalGals);
}
