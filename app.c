#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]) {
   int low, high, i, flag;
   if(argc < 2) {
     printf("No params given. Usage: myapp [startNumber] endNumber . If startNumber not given it starts at 1.");
     return 1;
   }
   if(argc == 2) {
     low = 1;
     char *endNum = argv[1];
     high = atoi(endNum);
   }
   if(argc == 3) {
     char *startNum = argv[1];
     low = atoi(startNum);
     char *endNum = argv[2];
     high = atoi(endNum);
   }

   printf("Prime numbers between %d and %d are: ", low, high);

   // iteration until low is not equal to high
   while (low < high) {
      flag = 0;

      // ignore numbers less than 2
      if (low <= 1) {
         ++low;
         continue;
      }

      // if low is a non-prime number, flag will be 1
      for (i = 2; i <= low / 2; ++i) {

         if (low % i == 0) {
            flag = 1;
            break;
         }
      }

      if (flag == 0)
         printf("%d ", low);

      // to check prime for the next number
      // increase low by 1
      ++low;
   }

   return 0;
}
