#include "sort.h"

/**
 * bubble_sort - Sorts an array of integers
 * in ascending order using Bubble sort
 *
 * @array: The array to be sorted
 * @size: Number of elements in the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int temp;
	int swapped;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		swapped = 0; /* Flag to check if any swap occurred in this pass */

		for (j = 0; j < size - i - 1; j++)
    	{
    		/* If the current element is greater than the next one, swap them */
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				swapped = 1;

				/* Print the array after each swap */
				print_array(array, size);
			}
		}

		/* If no swaps occurred, the array is already sorted */
		if (swapped == 0)
		break;
	}
}
