#include <stdio.h>
/**
 * A program that prints the alphabet in lowercase
 * Followed by a new line
 *
 * Return 0
 **/
int main(void)
{
int d;
for (d = 97; d <= 122; d++)
{
putchar(d);
}	
putchar(10);
return (0);
}
