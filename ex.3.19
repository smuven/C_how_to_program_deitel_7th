
#include <stdio.h>

/* Exercise 3.19 [C : How to Program, 7th Edition by Paul Deitel, Harvey Deitel]
 Solution provided by Chijioke Ahuchogu     */
int main(void)

{
    float principal , rate , term , intCharge = 0 ;
    
    printf("Enter loan principal (-1 to end) ");
    scanf("%f", &principal);
    
    while ( principal != -1) {
        
        printf("Enter interest rate:");
        scanf("%f", &rate);
        
        printf("Enter term of the loan in days: ");
        scanf("%f", &term);
        
        intCharge = principal * rate * term / 365;
        
        printf("The interest charge is %.2f \n\n" , intCharge);

        printf("Enter loan principal (-1 to end) ");
        scanf("%f", &principal);
    }
}
