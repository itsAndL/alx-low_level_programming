#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always 0
 */
int main(void)
{
	int s = strlen("and that piece of art is useful - Dora Korpar, 2015-10-19\n");

	write(2,
	      "and that piece of art is useful - Dora Korpar, 2015-10-19\n",
	      s);
	return (1);
}
