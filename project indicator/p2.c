#include <stdio.h>
int cube(int *num) {
    return (*num) * (*num) * (*num);
}

void Cubes(int r, int c, int arr[r][c]) {
    printf("Cubes of all elements:\n");
    int i, j;
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("%d ", cube(&arr[i][j]));
        }
        printf("\n");
    }
}

int main() {
    int r, c; 
    printf("Enter number of rows: ");
    scanf("%d", &r);
    printf("Enter number of columns: ");
    scanf("%d", &c);

    int arr[r][c]; 
    int i, j;
    printf("Enter array elements:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    Cubes(r, c, arr);

    return 0;
}

