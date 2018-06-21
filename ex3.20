#include <stdio.h>

/* Exercise 3.20 [C : How to Program, 7th Edition by Paul Deitel, Harvey Deitel]
 Solution provided by Chijioke Ahuchogu     */
int main(void)
{
    float hours , rate , salary = 0 ;
    
    printf("Enter # of hours worked (-1 to end): ");
    scanf("%f", &hours);
    
    while (hours != -1) {
        
        printf("Enter hourly rate of the worker ($00.00): ");
        scanf("%f", &rate);

        if (hours <= 40) {
            salary = hours * rate ;
            printf("Salary is $%.2f \n " , salary) ;
            
        }
        else {
            salary = (1.5 * rate * (hours-40)) + (40 * rate) ;
            printf("Salary is $%.2f \n " , salary) ;
        }
        
        printf("Enter # of hours worked (-1 to end):");
        scanf("%f", &hours);
    }
}
