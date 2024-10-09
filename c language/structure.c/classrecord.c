#include <stdio.h>

// Modify the structure to include separate fields for individual marks
struct classrecord {
    char name[20];
    int rollnumber;
    float marks1;  // Marks in first subject
    float marks2;  // Marks in second subject
    float marks3;  // Marks in third subject
    float totalmarks;  // Total marks
} s[50];

int main() {
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter the name: ");
        scanf("%s", s[i].name);
        printf("Enter roll number: ");
        scanf("%d", &s[i].rollnumber);
        printf("Enter marks in three subjects: ");
        scanf("%f%f%f", &s[i].marks1, &s[i].marks2, &s[i].marks3);
        
        // Calculate total marks
        s[i].totalmarks = s[i].marks1 + s[i].marks2 + s[i].marks3;
    }

    printf("Details are:\n");
    for (int i = 0; i < n; i++) {
        printf("NAME = %s\n", s[i].name);
        printf("ROLL NUMBER = %d\n", s[i].rollnumber);
        printf("MARKS IN SUBJECT 1 = %.2f\n", s[i].marks1);
        printf("MARKS IN SUBJECT 2 = %.2f\n", s[i].marks2);
        printf("MARKS IN SUBJECT 3 = %.2f\n", s[i].marks3);
        printf("TOTAL MARKS = %.2f\n", s[i].totalmarks);
    }

    return 0;
}
