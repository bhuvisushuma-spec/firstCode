#include <stdio.h>

#define N 3

int main() {
    int a[N][N] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
    int temp, i, j;

    printf("Original Matrix:\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("%4d", *(*(a + i) + j));
        }
        printf("\n");
    }

    for (j = 0; j < N; j++) {
        temp = *(*(a + 0) + j);
        *(*(a + 0) + j) = *(*(a + 2) + j);
        *(*(a + 2) + j) = temp;
    }

    for (i = 0; i < N; i++) {
        temp = *(*(a + i) + 0);
        *(*(a + i) + 0) = *(*(a + i) + 1);
        *(*(a + i) + 1) = temp;
    }

    printf("Matrix after interchanging:\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("%4d", *(*(a + i) + j));
        }
        printf("\n");
    }

    return 0;
}
