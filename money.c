#include <stdio.h>

// function to check if a number is prime or not
int checkprime(int n) {
    int i;
    if(n<=1)
        return 0;
    for(i=2;i*i<=n;i++) {
        if(n%i==0)
            return 0;
    }
    return 1;
}

int main() {
    int N, i, j, roll_no, money_collected=0;

    // taking input N
    printf("Enter the number of classrooms: ");
    scanf("%d", &N);

    // checking if input is valid or not
    if(N<=1 || N>=70) {
        printf("Invalid input\n");
        return 0;
    }

    // visiting each classroom one by one
    for(i=1;i<=N;i++) {
        printf("Enter the number of students in classroom %d: ", i);
        int num_students;
        scanf("%d", &num_students);
        printf("Students with prime roll numbers in classroom %d = ", i);

        // checking each student's roll number and collecting money if roll number is prime
        for(j=1;j<=num_students;j++) {
            roll_no = 100*i + j;
            if(checkprime(roll_no)) {
                printf("%d ", roll_no);
                money_collected += 10;
            }
        }
        printf("\n");
    }

    // printing total money collected
    printf("Total money collected = Rs. %d\n", money_collected);
    return 0;
}
