#include <stdio.h>
int stack[100], i, choice = 0, n, top = -1;
void push();
void pop();
void show();
void main()  
{  
    printf("Enter the number of elements in the stack: ");   
    scanf("%d", &n);  
    while (choice != 4) 
    {  
        printf("\nChoose one from the below options...\n");  
        printf("1. Push\n2. Pop\n3. Show\n4. Exit\n");  
        printf("Enter your choice: ");        
        scanf("%d", &choice);  
        switch (choice)  
        {  
            case 1:  
                push();  
                break;
            case 2:  
                pop();   
                break;
            case 3:  
                show(); 
                break;
            case 4:  
                printf("Exiting...\n");  
                break;
            default:  
                printf("Please enter a valid choice");  
        }  
    }  
}  
void push()  
{  
    int val;
    if (top == n - 1)  
        printf("Stack Overflow!\n");  
    else  
    {  
        printf("Enter the value to push: ");  
        scanf("%d", &val); 
        top = top + 1;  
        stack[top] = val; 
        printf("%d has been pushed onto the stack", val);
    }  
}  
void pop()  
{  
    // Underflow condition
    if (top == -1)  
        printf("\nStack Underflow!\n");  
    else  
    {  
        printf("%d has been popped from the stack", stack[top]);  
        top = top - 1; 
    }  
}  
void show()  
{  
    if (top == -1)  
    {  
        printf("\nStack is empty");  
    }  
    else  
    {  
        printf("\nStack elements are:");  
        for (i = top; i >= 0; i--)  
        {  
            printf("%d", stack[i]); 
        }  
    }  
}
