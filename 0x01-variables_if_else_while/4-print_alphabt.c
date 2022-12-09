#include <stdio.h>

/**
 *main - Entery point
 *Return: return (0)
*/

int main(void)
{
char i;
for (i = 'a'; i <= 'z'; i++)
{
if (i == 'e' || i == 'q')
{
continue;
}
putchar(i);
}
putchar('\n');
return (0);
}
