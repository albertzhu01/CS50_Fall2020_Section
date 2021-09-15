#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int num = 0;

    // Get user input
    do
    {
        num = get_int("Enter an integer > 1: ");
    } while (num <= 1);

    // Initialize smallest factor to the number itself
    int factor = num;

    // If a number less than half the input can divide the input,
    // set it as the factor
    for (int i = num / 2; i > 1; i--)
    {
        if (num % i == 0)
        {
            factor = i;
        }
    }

    printf("%i\n", factor);
}