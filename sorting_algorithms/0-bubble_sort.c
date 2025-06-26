#include "sort.h"
#include <stdio.h>

/**
 * bubble_sort - Trie un tableau d'entiers en ordre croissant
 *               avec l'algorithme Bubble sort
 * @array: Le tableau d'entiers à trier
 * @size: La taille du tableau
 */
void bubble_sort(int *array, size_t size)
{
    size_t i, j;
    int tmp;
    int swapped;

    if (array == NULL || size < 2)
        return;

    for (i = 0; i < size - 1; i++)
    {
        swapped = 0;

        for (j = 0; j < size - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                /* Échange */
                tmp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = tmp;

                print_array(array, size);  // 📌 Impression après chaque swap
                swapped = 1;
            }
        }

        if (!swapped)
            break;
    }
}
