#include "sort.h"

/**
* swap_func - a function to swap array elements
* @a: the array to swap
* @b: the array to be swapped
*/

void swap_func(int *a, int *b)
{
    int tmp;

    tmp = *a;
    *a = *b;
    *b = tmp;
}
