#ifndef SORT_H
#define SORT_H

#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/* Data structure for doubly linked list */
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;

/* Function prototypes for print_array and print_list */
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

/* Sorting Algorithms Prototypes */

/* 0. Bubble Sort */
void bubble_sort(int *array, size_t size);

/* 1. Insertion Sort */
void insertion_sort_list(listint_t **list);

/* 2. Selection Sort */
void selection_sort(int *array, size_t size);

/* 3. Quick Sort */
void quick_sort(int *array, size_t size);
void quicksort_recursive(int *array, int low, int high, size_t size);
int lomuto_partition(int *array, int low, int high, size_t size);

/* 4. Shell Sort - Knuth Sequence */
void shell_sort(int *array, size_t size);

/* 5. Cocktail Shaker Sort */
void cocktail_sort_list(listint_t **list);

/* 6. Counting Sort */
void counting_sort(int *array, size_t size);

#endif /* SORT_H */
