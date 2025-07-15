#include "sort.h"
#include <stdio.h>

/**
 * swap_ints - swaps two integers in an array
 * @a: pointer to first int
 * @b: pointer to second int
 */
void swap_ints(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

/**
 * lomuto_partition - partitions array using Lomuto partition scheme
 * @array: array of integers
 * @low: start index
 * @high: end index (pivot)
 * @size: size of the array
 * Return: index of the pivot after partition
 */
int lomuto_partition(int *array, int low, int high, size_t size)
{
    int pivot = array[high];
    int i = low - 1;
    int j;

    for (j = low; j <= high - 1; j++)
    {
        if (array[j] <= pivot)
        {
            i++;
            if (i != j)
            {
                swap_ints(&array[i], &array[j]);
                print_array(array, size);
            }
        }
    }
    if (i + 1 != high)
    {
        swap_ints(&array[i + 1], &array[high]);
        print_array(array, size);
    }
    return (i + 1);
}

/**
 * quick_sort_recursive - helper function for quick_sort
 * @array: array to sort
 * @low: starting index
 * @high: ending index
 * @size: array size
 */
void quick_sort_recursive(int *array, int low, int high, size_t size)
{
    if (low < high)
    {
        int pi = lomuto_partition(array, low, high, size);

        quick_sort_recursive(array, low, pi - 1, size);
        quick_sort_recursive(array, pi + 1, high, size);
    }
}

/**
 * quick_sort - sorts an array of integers in ascending order using Quick sort
 * @array: array to sort
 * @size: size of the array
 */
void quick_sort(int *array, size_t size)
{
    if (!array || size < 2)
        return;

    quick_sort_recursive(array, 0, (int)size - 1, size);
}
