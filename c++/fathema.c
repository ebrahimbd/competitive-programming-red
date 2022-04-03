#include<stdio.h>
#include<stdbool.h>

int main() {
    bool haha=false;
    int rows;
    printf("N=\n");
    scanf("%d", &rows);

    for (int i = 0; i < rows; i++) {
        if(haha==false){
            for (int j = 0; j <=i; j++) {
                printf("#");
                haha=true;
                }
            }else
            for (int j = 0; j <=i; j++) {
                printf("*");
                haha=false;
                }
            printf("\n");
    }
    return(0);
}