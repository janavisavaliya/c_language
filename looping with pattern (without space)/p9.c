/*

A
2   B
c   3   D
4   E   5   F
G   6   H   7   I

*/

#include <stdio.h>

main() {
    char l = 'A';
    int i,j, k = 2;

    for (i = 0; i < 5; i++) {
        for (j = 0; j <= i; j++) {
            if (i % 2 == 0) {
                if (j % 2 == 0) {
                    printf("%c ", l++);
                } else {
                    printf("%d ", k++);
                }
            } else {
                if (j % 2 == 0) {
                    printf("%d ", k++);
                } else {
                    printf("%c ", l++);
                }
            }
        }
        printf("\n");
    }

}
