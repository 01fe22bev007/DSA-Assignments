#include<stdio.h>
#include<time.h>

// Function to calculate the summation of numbers in a file
int calculateSum(const char *filename) {
    FILE *fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error opening file\n");
        return -1; // Return -1 to indicate an error
    }

    int sum = 0;
    int num;
    while (fscanf(fp, "%d", &num) != EOF) {
        sum += num;
    }

    fclose(fp);
    return sum;
}

int main() {
    FILE *fp = fopen("randomfinal.txt", "w");
    if (fp == NULL) {
        printf("Error\n");
        return 1;
    }

    srand(time(NULL));
    printf("The data taken by random generator is=\n");
    for (int i = 0; i < 10; i++) {
        int random = rand() % 51;
        fprintf(fp, "%d\n", random);
    }

    fclose(fp);
    printf("file saved\n");

    // Calculate the sum and print it
    int sum = calculateSum("randomfinal.txt");
    if (sum != -1) {
        printf("Sum of numbers in the file: %d\n", sum);
    }

    return 0;
}
