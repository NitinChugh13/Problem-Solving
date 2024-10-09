#include <stdio.h>

// Function prototypes
float sum(float, float);
float average(float, float);

// Function definitions
float sum(float a, float b) {
    float result = a + b;
    printf("sum = %f\n", result);
    return result;
}

float average(float a, float b) {
    float avg = (a + b) / 2;
    printf("average = %f\n", avg);
    return avg;
}

int main() {
    float n, m;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%f %f", &n, &m);

    // Compute and print sum and average
    float s = sum(n, m);
    float avg = average(n, m);

    // Print results
    printf("The sum is %f\n", s);
    printf("The average is %.2f\n", avg);

    return 0;
}
