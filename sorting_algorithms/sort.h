#ifndef SORT_H
#define SORT_H

#include <stddef.h>  // pour size_t
#include <stdio.h>   // pour printf dans print_array

/* Fonction de tri */
void bubble_sort(int *array, size_t size);

/* Fonction utilitaire pour afficher un tableau d'entiers */
void print_array(const int *array, size_t size);

#endif /* SORT_H */
