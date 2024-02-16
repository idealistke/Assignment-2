#include <stdio.h>
#include <math.h>

// Function to check if a number is a narcissistic or plenary number
int isNarcissistic(int num) {
    int originalNum = num, n = 0, sum = 0;

    // Count the number of digits
    while (originalNum != 0) {
        originalNum /= 10;
        ++n;
    }

    originalNum = num; // Reset originalNum to the input number

    // Calculate the sum of digits raised to the power of n
    while (originalNum != 0) {
        int digit = originalNum % 10;
        sum += pow(digit, n);
        originalNum /= 10;
    }

    return (num == sum);
}

int main() {
    int n;

    // Prompt user to enter the number
    printf("Enter a number: ");
    scanf("%d", &n);

    // Check if the number is a narcissistic or plenary number
    if (isNarcissistic(n)) {
        printf("%d is a narcissistic or plenary number.\n", n);
    } else {
        printf("%d is not a narcissistic or plenary number.\n", n);
    }

    return 0;
}
