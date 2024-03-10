#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is prime or not
bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

// Function to display all prime numbers in upper triangle of 2D array
void displayUpperTrianglePrimes(int arr[][3], int n) {
    printf("Prime numbers present in upper triangle:\n");
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            if (isPrime(arr[i][j])) {
                printf("%d ", arr[i][j]);
            }
        }
    }
    printf("\n");
}
