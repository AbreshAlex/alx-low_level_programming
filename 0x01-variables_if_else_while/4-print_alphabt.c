#include <stdio.h>

/**
 * main - prints lower case alphabets except q and e
 * Return: 0
 */
int main(void)
{
char az;
az = 'a';

for (az = 'a'; az <= 'z'; az++)
putchar(az);
for (az = 'A'; az <= 'Z'; az++)
putchar(az);
putchar('\n');

return (0);
}
