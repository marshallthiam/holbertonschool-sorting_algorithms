#include <stdio.h>

/**
 * print_array - Imprime un tableau d'entiers
 * @array: le tableau à imprimer
 * @size: la taille du tableau
 */
void print_array(const int *array, size_t size)
{
    size_t i;

    for (i = 0; i < size; i++)
    {
        printf("%d", array[i]);
        if (i < size - 1)
            printf(", ");
    }
    printf("\n");
}
