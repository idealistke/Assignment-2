#include <stdio.h>

// Function to generate Fibonacci series up to n using recursion
int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int n;

    // Prompt user to enter the number up to which Fibonacci series is to be generated
    printf("Enter the number up to which Fibonacci series is to be generated: ");
    scanf("%d", &n);

    // Check if n is non-negative
    if (n < 0) {
        printf("Please enter a non-negative number.\n");
        return 1; // Exit with an error code
    }

    // Generate and print Fibonacci series
    printf("Fibonacci Series up to %d terms: \n", n);
    for (int i = 0; i < n; ++i) {
        printf("%d ", fibonacci(i));
    }

    return 0;
}
