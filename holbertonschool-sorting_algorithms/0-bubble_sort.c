#include "sort.h"
/**
* bubble_sort - function that sorts an array of integers in 
* ascending order using the Bubble sort algorithm
* @array: The array to sort.
* @size: The length of the aaray.
* Return: Nothing.
*/
void bubble_sort(int *array, size_t size)
{
	size_t x = 0, y = 0;
	int tmp = 0;

	if (array == NULL || size == 0)
		return;
	for (; x < size - 1; x++)
	{
		for (y = 0; y < size - x - 1; y++)
		{
			if (array[y] > array[y + 1])
			{
				tmp = array[y + 1];
				array[y + 1] = array[y];
				array[y] = tmp;
				print_array(array, size);
			}
		}
	}
}