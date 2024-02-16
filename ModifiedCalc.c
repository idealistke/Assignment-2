#include <stdio.h>

// Function prototypes
float add(float num1, float num2);
float subtract(float num1, float num2);
float multiply(float num1, float num2);
float divide(float num1, float num2);

int main() {
    float num1, num2;

    // Prompt user to enter two numbers
    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

    // Perform operations and display results
    printf("i) The Sum of %.2f and %.2f is: %.2f\n", num1, num2, add(num1, num2));
    printf("ii) The Difference of %.2f and %.2f is: %.2f\n", num1, num2, subtract(num1, num2));
    printf("iii) The Product and Quotient are: %.2f and %.2f\n", multiply(num1, num2), divide(num1, num2));

    return 0;
}

// Function to perform addition
float add(float num1, float num2) {
    return num1 + num2;
}

// Function to perform subtraction
float subtract(float num1, float num2) {
    return num1 - num2;
}

// Function to perform multiplication
float multiply(float num1, float num2) {
    return num1 * num2;
}

// Function to perform division
float divide(float num1, float num2) {
    if (num2 != 0) {
        return num1 / num2;
    } else {
        printf("Error: Division by zero is undefined.\n");
        return 0.0;
    }
}
