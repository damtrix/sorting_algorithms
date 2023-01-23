#include "sort.h"

/**
 * bubble_sort - an algorithm for sort data
 *
 * @array: Pointer to array
 * @size: Size of the array
 *
 * Return: 0
 */

void bubble_sort(int *array, size_t size)
{
	unsigned int i, j, temp;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < (size - 1); j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
			}
		}
	}
}
