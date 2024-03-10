#include <stdio.h>
#include <stdlib.h> // Include this header for rand() and srand()
#include <time.h>   // Include this header for srand() initialization

void read(int x[50][50], int row, int col);
void display(int x[50][50], int row, int col);
void add(int x[50][50], int y[50][50], int row, int col);

int main() {
    int x[50][50], y[50][50], xrow, xcol, yrow, ycol;

    printf("Enter rows and columns of matrix X:\n");
    scanf("%d %d", &xrow, &xcol);
    printf("Enter rows and columns of matrix Y:\n");
    scanf("%d %d", &yrow, &ycol);

    if (xrow == yrow && xcol == ycol) {
        read(x, xrow, xcol);
        read(y, yrow, ycol);

        printf("Matrix X:\n");
        display(x, xrow, xcol);
        printf("Matrix Y:\n");
        display(y, yrow, ycol);

        printf("Addition of matrices X and Y:\n");
        add(x, y, xrow, xcol);
    } else {
        printf("Rows and columns do not match. Addition not possible.\n");
    }

    return 0;
}

void read(int x[50][50], int row, int col) {
    printf("Enter the elements:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            x[i][j] = rand() % 100; // Generating random integers between 0 and 99
        }
    }
}

void display(int x[50][50], int row, int col) {
    printf("Elements:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", x[i][j]);
        }
        printf("\n");
    }
}

void add(int x[50][50], int y[50][50], int row, int col) {
    int z[50][50];
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            z[i][j] = x[i][j] + y[i][j];
        }
    }
    display(z, row, col);
}
