#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Get input
    int n = get_int("How many values? ");
    int values[n];
    for (int i = 0; i < n; i++)
    {
        values[i] = get_int("Value %i: ", i);
    }

    // Selection Sort
    for (int i = 0; i < n - 1; i++)
    {
        // Initialize minimum value to i'th value
        int min_index = i;
        for (int j = i + 1; j < n; j++)
        {
            // Set j'th index minimum if j'th value is smaller
            if (values[j] < values[min_index])
            {
                min_index = j;
            }
        }

        // Swap with minimum value
        int temp = values[i];
        values[i] = values[min_index];
        values[min_index] = temp;
    }

    // Print sorted values
    for (int i = 0; i < n; i++)
    {
        printf("%i\n", values[i]);
    }
}