
#include <stdio.h>
#include <stdbool.h>

int main() {
 int x,y ;
 for(x=0; x<4; x++){
    for(y=4; y>2; y--){
            if(x==0){
              x++;
            }
        printf("%d %d\n", x,y);
    }
 }
/* ==== output according to given  code====
0 4
0 3
2 4
2 3
3 4
3 3
 */
printf("-----------------change statement----------------------\n");

int update() {
 int x,y ;
 for(x=0; x<4; x++){
    for(y=4; y>2; y--){
            if(x==2){
            }else{
            printf("%d %d\n", x,y);
            }
      }
    }
 }
 /* ==== output according to given statement change code====
0 4
0 3
1 4
1 3
3 4
3 3
 */
 update();
  return 0;
}




