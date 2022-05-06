/*
*
##
***
####
*****
######
*******
########
*********
*/

#include <stdio.h>
#include <stdbool.h>

int main() {
   int rows;
   printf("N=\n");
   scanf("%d", & rows);
   int y = 0;

   int print_hesh(int i) {
      int ebra(int k, int i) {
         if (k == i) {
            return;
         } else {
            printf("#");
         }
         k++;
         ebra(k, i);
      };
      ebra(0, i);
   }

   int print_star(int i) {
      int ebra(int k, int i) {
         if (k == i) {
            return;
         } else {
            printf("*");
         }
         k++;
         ebra(k, i);
      };
      ebra(0, i);
   }

   int print(int i, int rows) {

      if (i == rows) {
         return ;
      } else {
         if (y == 0) {
            print_hesh(i);
            y = 1;
         } else {
            print_star(i);
            y = 0;
         }
      }
      i++;
      printf("\n");
      print(i, rows);
   }

   print(0, rows);
   return (0);
}
