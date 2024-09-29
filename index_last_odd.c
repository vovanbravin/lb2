#include "function.h"

int index_last_odd(int array[],int size)
{
    while (array[size - 1] % 2 == 0) size--;
    return --size;
}
