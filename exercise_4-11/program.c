#include <stdio.h>

int main(void)
{
   unsigned int count;
   int smallest = 99999999;
   int num;

   scanf("%u", &count);

   for(int x = 0; x < count; x++){
    scanf("%d", &num);
   if(num < smallest) {
    smallest = num;
   }
   }

   printf("The smallest number is %d\n", smallest);
    
   return 0;
}