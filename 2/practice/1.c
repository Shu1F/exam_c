#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int i, j, k;
    int **mat;
    int a, b;
    int num = 1;

    scanf("%d %d", &a, &b);

    // a行分のポインタを確保
    mat = malloc(sizeof(int *) * a);

    for(i = 0; i < a; i++) {
        mat[i] = malloc(sizeof(int) * b);
    }

    for(i = 0; i < a; i++) {
        for(j = 0; j < b; j++) {
            mat[i][j] = num;
            num++;
        }
    }

    for(i = 0; i < a; i++) {
        for(j = 0; j < b; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    for(i = 0; i < a; i++) {
        free(mat[i]);
    }

    free(mat);

    return 0;
}