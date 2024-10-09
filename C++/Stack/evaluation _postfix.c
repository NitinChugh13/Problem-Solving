#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX 100

int stack[MAX];
int top = -1;

// Push a value onto the stack
void push(int value) {
    if (top < MAX - 1) {
        stack[++top] = value;
    } else {
        printf("Stack Overflow\n");
        exit(1);
    }
}

// Pop a value from the stack
int pop() {
    if (top >= 0) {
        return stack[top--];
    } else {
        printf("Stack Underflow\n");
        exit(1);
    }
}

// Evaluate a postfix expression
int evaluatePostfix(char* expression) {
    for (int i = 0; expression[i] != '\0'; i++) {
        // Skip spaces
        if (expression[i] == ' ') continue;

        // If the character is a digit
        if (isdigit(expression[i])) {
            push(expression[i] - '0'); // Convert char to int
        } else {
            // Pop two operands
            int operand2 = pop();
            int operand1 = pop();
            // Perform the operation
            switch (expression[i]) {
                case '+': push(operand1 + operand2); break;
                case '-': push(operand1 - operand2); break;
                case '*': push(operand1 * operand2); break;
                case '/':
                    if (operand2 != 0) {
                        push(operand1 / operand2);
                    } else {
                        printf("Division by zero\n");
                        exit(1);
                    }
                    break;
                default:
                    printf("Unknown operator: %c\n", expression[i]);
                    exit(1);
            }
        }
    }
    return pop(); // Return the final result
}

int main() {
    char expression[MAX];
    printf("Enter a postfix expression (e.g., '23 45 + 6 *'): ");
    fgets(expression, MAX, stdin);

    int result = evaluatePostfix(expression);
    printf("Result: %d\n", result);
    
    return 0;
}