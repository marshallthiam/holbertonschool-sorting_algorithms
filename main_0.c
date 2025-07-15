#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * main - Entry point for testing insertion_sort_list
 *
 * Return: Always 0
 */
int main(void)
{
    listint_t *list = NULL;

    add_node_end(&list, 19);
    add_node_end(&list, 48);
    add_node_end(&list, 9);
    add_node_end(&list, 29);
    add_node_end(&list, 57);
    add_node_end(&list, 3);
    add_node_end(&list, 98);
    add_node_end(&list, 0);
    add_node_end(&list, 37);

    print_list(list);
    printf("Sorting list...\n");
    insertion_sort_list(&list);
    print_list(list);
    return (0);
}
