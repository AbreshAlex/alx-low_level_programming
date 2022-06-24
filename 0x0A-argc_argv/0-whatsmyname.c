#include "main.h"
#include <stdio.h>

/**
 * main - a program that prints its name
 * @argc: count of arguments passed
 * @argv: array of arguments passed
 * Return: 0
 */
int main(int argc, char *argv[])
{
int i;
i = argc;

if (i >= 0)
printf("%s\n", argv[0]);

return (0);
}
