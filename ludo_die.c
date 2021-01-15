
/* This program is of a Dice. It generates random number from 1 to 6 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
   int num;

      srand(time(NULL));
   for(int i=0; i<3; i++)
   {
      num = 1 + rand() % 6;
      printf("%d ", num);        

      cond: if(num==6){
         num = 1 + rand() % 6;
         printf("%d ", num); 
         if(num==6)
         goto cond;
         break;       
      }
      else 
      break;
   }
   return 0;
}