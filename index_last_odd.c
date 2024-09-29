#include "index_last_odd.h"

int index_last_odd(int array[],int size)
{
    for(;size > 0;size--) if(array[size-1] % 2 != 0) return --size;
}
