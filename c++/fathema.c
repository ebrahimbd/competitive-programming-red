#include<stdio.h>
#include<stdbool.h>

int main() {
    int k=0;
    int rows;
    printf("N=\n");
    scanf("%d", &rows);

    for (int i = 0; i < rows; i++) {
        if(k==0){
            for (int j = 0; j <=i; j++) {
                printf("#");
                k=1;
                }
            }else
            for (int j = 0; j <=i; j++) {
                printf("*");
                k=0;
                }
            printf("\n");
    }
    return(0);
}
