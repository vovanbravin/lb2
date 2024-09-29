#include <stdio.h>
#include "index_first_even.h"
#include "index_last_odd.h"
#include "sum_between_even_odd.h"
#include "sum_before_even_and_after_odd.h"
#include "locale.h"
int main()
{
	setlocale(LC_ALL,"RU");
	int array[100];
	int size = 0; 
	char c;
	int number = -1;
	puts("Enter: ");
	do
	{
		if (number == -1) scanf("%d%c", &number, &c);
		else scanf("%d%c", &array[size++], &c); 
	} while (c != '\n'); 
	switch (number)
	{
	case 0:
		printf("%d\n", index_first_even(array));
		break;
	case 1:
		printf("%d\n", index_last_odd(array,size));
		break;
	case 2:
		printf("%d\n", sum_between_even_odd(array,size));
		break;
	case 3:
		printf("%d\n", sum_before_even_and_after_odd(array,size));
		break;
	default:
		printf("Данные некорректны");

	}
	return 0;
}
