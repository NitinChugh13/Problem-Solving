#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_TRANSACTIONS 100

typedef struct
{
    char description[100];
    float amount;
    char date[11]; // Format: YYYY-MM-DD
    char category[50];
} Transaction;

// Function prototypes
void addTransaction(Transaction transactions[], int *count);
void viewTransactions(Transaction transactions[], int count);
void saveTransactionsToFile(Transaction transactions[], int count);
void loadTransactionsFromFile(Transaction transactions[], int *count);
void displayMenu();

int main()
{
    Transaction transactions[MAX_TRANSACTIONS];
    int count = 0;
    int choice;

    while (1)
    {
        displayMenu();
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // Consume newline

        switch (choice)
        {
        case 1:
            addTransaction(transactions, &count);
            break;
        case 2:
            viewTransactions(transactions, count);
            break;
        case 3:
            saveTransactionsToFile(transactions, count);
            break;
        case 4:
            loadTransactionsFromFile(transactions, &count);
            break;
        case 5:
            printf("Exiting...\n");
            return 0;
        default:
            printf("Invalid choice, please try again.\n");
        }
    }

    return 0;
}

void displayMenu()
{
    printf("\nPersonal Finance Manager\n");
    printf("1. Add Transaction\n");
    printf("2. View Transactions\n");
    printf("3. Save to File\n");
    printf("4. Load from File\n");
    printf("5. Exit\n");
}

void addTransaction(Transaction transactions[], int *count)
{
    if (*count >= MAX_TRANSACTIONS)
    {
        printf("Transaction list is full. Cannot add more transactions.\n");
        return;
    }

    printf("Enter description: ");
    fgets(transactions[*count].description, sizeof(transactions[*count].description), stdin);
    transactions[*count].description[strcspn(transactions[*count].description, "\n")] = '\0'; // Remove newline character

    printf("Enter amount: ");
    scanf("%f", &transactions[*count].amount);
    getchar(); // Consume newline

    printf("Enter date (YYYY-MM-DD): ");
    fgets(transactions[*count].date, sizeof(transactions[*count].date), stdin);
    transactions[*count].date[strcspn(transactions[*count].date, "\n")] = '\0'; // Remove newline character

    printf("Enter category: ");
    fgets(transactions[*count].category, sizeof(transactions[*count].category), stdin);
    transactions[*count].category[strcspn(transactions[*count].category, "\n")] = '\0'; // Remove newline character

    (*count)++;
}

void viewTransactions(Transaction transactions[], int count)
{
    if (count == 0)
    {
        printf("No transactions to display.\n");
        return;
    }

    for (int i = 0; i < count; i++)
    {
        printf("\nTransaction %d:\n", i + 1);
        printf("Description: %s\n", transactions[i].description);
        printf("Amount: %.2f\n", transactions[i].amount);
        printf("Date: %s\n", transactions[i].date);
        printf("Category: %s\n", transactions[i].category);
    }
}

void saveTransactionsToFile(Transaction transactions[], int count)
{
    FILE *file = fopen("transactions.txt", "w");
    if (file == NULL)
    {
        printf("Error opening file for writing.\n");
        return;
    }

    for (int i = 0; i < count; i++)
    {
        fprintf(file, "%s,%f,%s,%s\n", transactions[i].description, transactions[i].amount, transactions[i].date, transactions[i].category);
    }

    fclose(file);
    printf("Transactions saved to file.\n");
}

void loadTransactionsFromFile(Transaction transactions[], int *count)
{
    FILE *file = fopen("transactions.txt", "r");
    if (file == NULL)
    {
        printf("Error opening file for reading.\n");
        return;
    }

    while (fscanf(file, "%99[^,],%f,%10[^,],%49[^\n]\n", transactions[*count].description, &transactions[*count].amount, transactions[*count].date, transactions[*count].category) != EOF)
    {
        (*count)++;
        if (*count >= MAX_TRANSACTIONS)
        {
            printf("Reached maximum number of transactions.\n");
            break;
        }
    }

    fclose(file);
    printf("Transactions loaded from file.\n");
}
