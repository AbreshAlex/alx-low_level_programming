#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an array of chars and initialize with a char
 * @size: size of array
 * @c: char to initialize
 * Return: char*
 */
char *create_array(unsigned int size, char c)
{
unsigned int i = 0;
char *arr = malloc(size);
for (; i < size; i++)
*(arr + i) = c;

return (arr);
}
