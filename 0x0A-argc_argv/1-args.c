#include "main.h"
#include <stdio.h>

/**
 * main - prints number of arguments passed
 * @argc: count of arguments passed
 * @argv: array of arguments passed
 * Return: 0
 */
int main(int argc, char *argv[])
{
int i;
i = argc;

if (i >= 0 && *argv[0] != '\0')
printf("%d\n", argc - 1);

return (0);
}
