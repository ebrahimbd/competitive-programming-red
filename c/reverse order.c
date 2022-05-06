
#include <stdio.h>
#include <stdbool.h>

int main() {
   int num[]={10, 8, 6,4,2,0};

  int size = (sizeof num / sizeof num[0])-1;

for(int i=size; i>=0; i--){
   printf("%d \n", num[i]);
}
   return 0;
}









