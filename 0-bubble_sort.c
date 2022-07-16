#include "sort.h"

/**
* bubble_sort - function that sorts an array of integers in ascending order
* using the Bubble sort algorithm
*
* @array : the array to be sorted
* @size : the size of the array
*
* returns: success 0
*/

void bubble_sort(int *array, size_t size)
{
    size_t i, j, flag;
    for (i = 0; i < size - 1; i++)
     {
        flag = 0;
        for (j = 0; j < size - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                swap_func(&array[j], &array[j + 1]);
                print_array(array, size);
                flag = 1;
            }
        }
        if (flag == 0)
            break;
     }
}