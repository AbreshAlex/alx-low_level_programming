#include "main.h"

/**
 * set_string - sets value of pointer to char
 * @s: pointer to change
 * @to: char to assign
 */
void set_string(char **s, char *to)
{
(*s = to);

return;
}
