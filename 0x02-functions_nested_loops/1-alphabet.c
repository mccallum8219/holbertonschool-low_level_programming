#include "main.h"
/**
 * 
 * Return: void
 */
void print_alphabet(void)
{
	int i;
	int j;
	for (j = 0; j < 10)
	{
		for (i = 97; i < 123)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
