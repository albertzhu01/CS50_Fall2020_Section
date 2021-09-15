#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Initialize variable to store the n by n grid
    int num = 0;

    // Get user input for dimension of n by n grid
    do
    {
        num = get_int("Enter a positive, odd integer: ");
    } while (num < 1 || num % 2 == 0);

    // Determines whether to print + or -
    int sign = 1;

    // Prints n by n grid
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++)
        {
            if (sign > 0)
            {
                printf("+ ");
            }
            else
            {
                printf("- ");
            }

            // Alternate signs
            sign *= -1;
        }
        printf("\n");
    }
}