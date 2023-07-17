#include <stdio.h>

int main (void)
{
    printf("Enter two integer: \n");
     int x, z;
     scanf("%d%d", &x, &z);

     if(x > z){
        printf("%d is larger than %d\n", x, z);
     }

      if(x < z){
        printf("%d is less than %d\n", x, z);
     }

      if(x == z){
        printf("%d is equal to %d\n", x, z);
     }


}