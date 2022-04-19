/*
N=
12
#
##
###
####
#####
######
#######
########
#########
##########
###########
*/

#include <stdio.h>
#include <stdbool.h>

    int main() {
    int k = 0;
    int rows;
    printf("N=\n");
    scanf("%d", &rows);
        int fathema(int i, int rows) {
            int eb = 0;
            int y = 0;
            if (i == rows) {
                return;
            } else {
                if (y == 0) {
                    int ebra(int k, int i) {
                        if (k == i) {
                            return 0;
                        } else {
                            printf("#");
                        }
                        y = 1;
                        k++;
                        ebra(k, i);
                    };
                    ebra(0, i);
                }
                printf("\n");
                i++;
                fathema(i, rows);
            }
        }
        fathema(0, rows);
        return (0);
    }
