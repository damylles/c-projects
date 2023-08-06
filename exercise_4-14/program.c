#include <stdio.h>

int main(void)
{
    int factorial;

    for(int x = 1; x <= 5; x++){
        factorial = 1;

        for(int y = x; y >= 1; y--){
            factorial *= y;

        }

        printf("!%d = %10d\n", x, factorial);

    }
    
   

   return 0;
}