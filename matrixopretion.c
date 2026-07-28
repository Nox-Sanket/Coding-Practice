#include <stdio.h>

int main() {
    int choice;
    printf("1.Transpose\n2.Arithmetic operation\nEnter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        int row, col;
        printf("Enter rows and columns: ");
        scanf("%d%d", &row, &col);

        int arr[row][col];
        printf("Enter elements row-wise:\n");
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                scanf("%d", &arr[i][j]);
            }
        }

        printf("Transpose:\n");
        for (int i = 0; i < col; i++) {
            for (int j = 0; j < row; j++) {
                printf("%d ", arr[j][i]);
            }
            printf("\n");
        }

    } else {
        int op;
        printf("1.Addition\n2.Multiplication\nEnter your choice: ");
        scanf("%d", &op);

        int rowA, colA, rowB, colB;
        printf("Enter rows and columns of Matrix A: ");
        scanf("%d%d", &rowA, &colA);
        int matA[rowA][colA];
        printf("Enter elements of Matrix A:\n");
        for (int i = 0; i < rowA; i++)
            for (int j = 0; j < colA; j++)
                scanf("%d", &matA[i][j]);

        printf("Enter rows and columns of Matrix B: ");
        scanf("%d%d", &rowB, &colB);
        int matB[rowB][colB];
        printf("Enter elements of Matrix B:\n");
        for (int i = 0; i < rowB; i++)
            for (int j = 0; j < colB; j++)
                scanf("%d", &matB[i][j]);

        if (op == 1) {
            if (rowA == rowB && colA == colB) {
                printf("Addition:\n");
                for (int i = 0; i < rowA; i++) {
                    for (int j = 0; j < colA; j++) {
                        printf("%d ", matA[i][j] + matB[i][j]);
                    }
                    printf("\n");
                }
            } else {
                printf("Invalid: Matrices must have same dimensions.\n");
            }
        } else if (op == 2) {
            if (colA == rowB) {
                int mult[rowA][colB];
                for (int i = 0; i < rowA; i++) {
                    for (int j = 0; j < colB; j++) {
                        mult[i][j] = 0;
                        for (int k = 0; k < colA; k++) {
                            mult[i][j] += matA[i][k] * matB[k][j];
                        }
                    }
                }
                printf("Multiplication:\n");
                for (int i = 0; i < rowA; i++) {
                    for (int j = 0; j < colB; j++) {
                        printf("%d ", mult[i][j]);
                    }
                    printf("\n");
                }
            } else {
                printf("Invalid: Columns of A must equal rows of B.\n");
            }
        }
    }
    return 0;
}
