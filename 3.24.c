
#include <stdio.h>

int main(void)

{
    int i = 1;
    
    printf("N\t 10*N\t 100*N\t 1000*N\n");
    while (i <= 10)
    {
    printf("%d \t %d \t %d \t %d \n", i, 10*i, 100*i, 1000*i);
        i++;
    }
    return 0;
    
    
    
    
}
