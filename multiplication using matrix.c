#include<stdio.h>

void read_array(int a[30][40], int row, int col);
void display_array(int a[30][40], int row, int col);
void multiply_matrix(int a[30][40], int b[30][40], int row, int col);

int main() {
    int a[30][40], b[30][40], arow, acol, brow, bcol;

    printf("Enter the number of rows and columns of matrix A:\n");
    scanf("%d %d", &arow, &acol);
    printf("Enter the number of rows and columns of matrix B:\n");
    scanf("%d %d", &brow, &bcol);

    if (arow == brow && acol == bcol) {
        read_array(a, arow, acol);
        read_array(b, brow, bcol);
        display_array(a, arow, acol);
        display_array(b, brow, bcol);
        multiply_matrix(a, b, arow, acol);
    } else {
        printf("Matrices are not of the same size. Multiplication is not possible.\n");
    }

    return 0;
}

void read_array(int a[30][40], int row, int col) {
    printf("Enter the array elements:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &a[i][j]);
        }
    }
}

void display_array(int a[30][40], int row, int col) {
    printf("The array elements are:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

void multiply_matrix(int a[30][40], int b[30][40], int row, int col) {
    int c[30][40];
    printf("The product array is:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            c[i][j] = a[i][j] * b[i][j];
        }
    }
    display_array(c, row, col);
}
