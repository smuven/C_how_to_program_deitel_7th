
#include <stdio.h>

/* Exercise 3.18 [C : How to Program, 7th Edition by Paul Deitel, Harvey Deitel]
 Solution provided by Chijioke Ahuchogu     */
int main(void)
{

    float grossSales , salary  = 0 ;
    
    printf("Enter sales in dollars (-1 to end) : ");
    scanf("%f", &grossSales);
    
    while ( grossSales != -1) {
        salary = 200 + (.09 * grossSales);
        
        printf("Salary is %.2f: \n\n", salary);
       
        
        printf("Enter sales in dollars (-1 to end) :");
        scanf("%f", &grossSales);
    }
    
}
