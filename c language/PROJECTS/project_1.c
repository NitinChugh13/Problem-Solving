#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
// Seed the random number generator with the current time
srand(time(NULL));

// Generate a random number
// int random_number = rand();

// Display the random number
// printf("Random number: %d\n", random_number);

// If you want a random number within a specific range, e.g., 0 to 99
int range_min = 0;
int range_max = 99;
int random_in_range = rand() % (range_max - range_min + 1) + range_min;

// printf("Random number in range %d to %d: %d\n", range_min, range_max, random_in_range);
int guessed, guess = 0;
printf("enter guessed number::");
// scanf("%d", &guessed);

do
{
// printf("enter guessed number::");
scanf("%d", &guessed);
if (guessed > random_in_range)
{
printf("enter lower number!!\n");
guess++;
}
else if (guessed < random_in_range)
{
printf("enter higher number!!\n");
guess++;
}
else
{
printf("congrats!!,you guessed the number in %d attempts\n ", guess + 1);
}

} while (guessed != random_in_range);

return 0;
}
