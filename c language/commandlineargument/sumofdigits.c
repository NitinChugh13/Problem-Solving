#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int n, sum = 0, r;

    // Check if the number is provided as a command-line argument
    if (argc == 2) {
        n = atoi(argv[1]);
    } else {
        // Prompt the user for input if no command-line argument is provided
        printf("Enter a number: ");
        if (scanf("%d", &n) != 1) {
            printf("Invalid input. Please enter a valid integer.\n");
            return 1;
        }
    }

    // Calculate the sum of digits
    while (n > 0) {
        r = n % 10;
        sum += r;
        n = n / 10;
    }

    // Print the result
    printf("The sum of digits is: %d\n", sum);

    return 0;
}
