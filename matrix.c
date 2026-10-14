#include <stdio.h>

int main() {
    int r1, c1, r2, c2, i, j, k;

    // 1. Matrix 1 ki rows aur columns enter karein
    printf("Enter rows and columns for the first matrix: ");
    scanf("%d %d", &r1, &c1);

    // 2. Matrix 2 ki rows aur columns enter karein
    printf("Enter rows and columns for the second matrix: ");
    scanf("%d %d", &r2, &c2);

    // Matrix multiplication ki condition: Column of Matrix 1 == Row of Matrix 2
    if (c1 != r2) {
        printf("Error! Multiplication possible nahi hai. Pehli matrix ke columns doosri matrix ke rows ke barabar hone chahiye.\n");
        return 0;
    }

    int a[10][10], b[10][10], result[10][10] = {0};

    // 3. Pehli matrix ke elements input lena
    printf("\nEnter elements of matrix 1:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    // 4. Doosri matrix ke elements input lena
    printf("\nEnter elements of matrix 2:\n");
    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            printf("B[%d][%d] = ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    // 5. Matrices ko multiply karna
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            for (k = 0; k < c1; k++) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    // 6. Resultant Matrix ko display karna
    printf("\nResultant Matrix (Multiplication Output):\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            printf("%d \t", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}