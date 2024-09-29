#include "sum_between_even_odd.h"

int sum_between_even_odd(int array[],int size)
{
    int sum = 0;
	int left = index_first_even(array);
	int right = index_last_odd(array,size);
    for (; left < right; left++) sum += abs(array[left]);
    return sum;
}
