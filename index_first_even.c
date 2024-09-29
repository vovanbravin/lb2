#include "function.h"

int index_first_even(int array[])
{
    int index = 0;
    while (array[index] % 2 != 0) index++; 
    return index;
}
