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

char *arr = malloc(size);
*arr = c;

return (arr);
}
