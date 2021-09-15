#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Initialize a variable to store the sum
    int sum = 0;

    // Prompt user for a number 10 times, each time adding to the sum
    for (int i = 0; i < 10; i++)
    {
        sum += get_int("Number: ");
    }

    // Print the sum
    printf("Sum: %i\n", sum);
}