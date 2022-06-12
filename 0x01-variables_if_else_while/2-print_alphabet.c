#include <stdio.h>

/**
 * main - prints lower case alphabets 97 to 122
 * Return: 0
 */
int main(void)
{
char az;
az = 'a';

for (az = 'a'; az <= 'z'; az++)
putchar(az);
putchar('\n');

return (0);
}
