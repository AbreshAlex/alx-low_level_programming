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
if (az != 'q' && az != 'e')
putchar(az);
putchar('\n');

return (0);
}
