#include <stdio.h>
#define UNUSED(x) (void)(x)

/**
 * main - entry point
 * @argc: number of command-line arguments
 * @argv: array of actual arguments
 *
 * Return: Always 0.
 *
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
