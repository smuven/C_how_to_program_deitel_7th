
#include <stdio.h>
// Ex 3.16 
int main(void) {
  
    float gallons = 0;
    float miles;
    float Tgallons = 0;
    float Tmiles = 0;
    float average;
    
    printf("Enter the gallons used (-1 to end):\n");
    scanf("%f",&gallons);

    while ( gallons != -1) {
       
     
        printf("Enter the miles driven:");
        scanf("%f",&miles);
        Tmiles += miles;
        Tgallons += gallons;
        printf("The miles per gallon of this tank is %.2f\n", miles/gallons);
        
        printf("Enter the gallons used (-1 to end):\n");
        scanf("%f",&gallons);
        
        
    }   // end while
    average = (float) Tmiles / Tgallons;
    printf("The overall average miles/gallon was %.2f\n", average);
    return 0;
}
