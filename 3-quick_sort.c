#include "sort.h"

/**
 * quick_sort - function that Sorts the elements in the array
 * @array: array to sort
 * @size: size of array
 *
 * Returns a new array with the sorted elements.
 */

 void swap_func(int *a, int *b)
 {
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
 }

int partition(int *array, int low, int high)
{
    int pivot = array[high];

    int j, i = (low - 1);
    for (j = low; j < high; j++)
    {
    if (array[j] <= pivot) {
        i++;
        swap_func(&array[i], &array[j]);
    }
    }

    swap_func(&array[i + 1], &array[high]);

  
  return (i + 1);
}

void _quickSort(int array[], int low, int high) {
  if (low < high) {

    int pi = partition(array, low, high);
    
    _quickSort(array, low, pi - 1);
    _quickSort(array, pi + 1, high);
  }
}

void quick_sort(int *array, size_t size)
{
    if (size >= 2)
    {
    _quickSort(array, 0, size);
    }
}