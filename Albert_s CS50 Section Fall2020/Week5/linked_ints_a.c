#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int number;
    struct node *next;
}
node;

void free_n(node *n);

int main(void)
{
    node *list = NULL;

    while (true)
    {
        int x = get_int("Number: ");
        if (x == INT_MAX)
        {
            printf("\n");
            break;
        }

        // Allocate a new node.
        node *n = malloc(sizeof(node));
        n->number = x;
        n->next = NULL;

		// Add new node to head of linked list.
        n->next = list;
        list = n;
    }

	// Print all nodes.
	for (node *ptr = list; ptr != NULL; ptr = ptr->next)
    {
        printf("%i\n", ptr->number);
    }

	// Free all nodes.
	free_n(list);
}

void free_n(node *n)
{
    if (n->next != NULL)
    {
        free_n(n->next);
    }

    free(n);
    return;
}