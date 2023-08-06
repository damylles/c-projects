#include <stdio.h>

int main(void)
{
   unsigned int count;
   int sum = 0;
   int num;

   scanf("%u", &count);

   for(int x = 0; x < count; x++){
    scanf("%d", &num);
    sum += num;
   }

   printf("TThe sum of all %u numbers is %d\n", count, sum);
    
   return 0;
}