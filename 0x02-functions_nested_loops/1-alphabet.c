#include "main.h"
/**
 * 
 * Return: void
 */
void print_alphabet(void)
{
	int i;
	int j;
	for (j = 0; j < 10; j++)
	{
	  for (i = 97; i < 123; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
