#include <stdio.h>
/**
 *main - Prints the alphabet in lowercase
 *
 *Return: 0 if success
 **/
int main(void)
{
int ch;
for (ch = 97; ch <= 122; ch++)
{
putchar (ch);
}
putchar(10);
return (0);
}
