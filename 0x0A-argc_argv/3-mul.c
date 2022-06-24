#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: count of arguments passed
 * @argv: array of arguments passed
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{

if (argc < 2)
{
printf("Error\n");
return (1);
}

printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

return (0);
}
