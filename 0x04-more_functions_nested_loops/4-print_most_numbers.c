#include "main.h"

/**
 * ptint_most_numbers - prints except 2 and 4.
 *
 * return: always 0 (success)
 */
void print_most_numbers(void)
{
int i;

i=0;

for (i=0; i < 10; i++)
{

if (i == 2 || i == 4)

i++;

_putchar(i + '0');

}
_putchar ('\n');

}
