#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints minimum number of coins
 * @argc: count of arguments passed
 * @argv: array of arguments passed
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
int i;

if (argc == 0 || argc == 1 || argc > 2)
{
printf("Error\n");
return (1);
}
i = atoi(argv[1]);
if (i <= 0)
printf("0\n");
if (i >= 25)
{
printf("%d\n", i / 25 + (i % 25) / 10 + ((i % 25) % 10) / 5 +
(((i % 25) % 10) % 5) / 2 + ((((i % 25) % 10) % 5) % 2) / 1);
return (0);
}
if (i >= 10)
{
printf("%d\n", i / 10 + (i % 10) / 5 + ((i % 10) % 5) / 2 +
(((i % 10) % 5) % 2) / 1);
return (0);
}
if (i >= 5)
{
printf("%d\n", i / 5 + (i % 5) / 2 + ((i % 5) % 2) / 1);
return (0);
}
if (i >= 2)
{
printf("%d\n", i / 2 + (i % 2) / 1);
return (0);
}
return (0);
}
