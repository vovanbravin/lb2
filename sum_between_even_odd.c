#include "function.h"

int sum_between_even_odd(int array[], int left, int right)
{
    int sum = 0;
    for (; left < right; left++) sum += abs(array[left]);
    return sum;
}
