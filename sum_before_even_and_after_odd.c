#include "sum_before_even_and_after_odd.h"

int sum_before_even_and_after_odd(int array[],int size)
{
    int sum = 0;
	int indexEven = index_first_even(array);
	int indexOdd = index_last_odd(array,size);
    for (int i = 0; i < size; i++) if (i < indexEven || i >= indexOdd) sum += abs(array[i]);
    return sum;
}
