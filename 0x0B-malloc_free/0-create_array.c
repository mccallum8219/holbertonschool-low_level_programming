#include "main.h"
#include <stdlib.h>
/**
 * create array of size and assign char
 * @size: size of array
 * @c: char to assign
 * Description: create array of size and assign char c
 * Return: pointer to array, NULL if fail
 *
 */

char *create_array(unsigned int size, char c)
{
	char *array;

	if (!size)
		return (NULL);

	array = (char *) malloc(sizeof(char) * size);

	if (array)
	{
		while (size > 0)
			array[--size] = c;
	}
	return (array);
}
