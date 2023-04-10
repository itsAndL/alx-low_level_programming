#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * StringCheck - checks string
 * @s: string to check
 * Return: boolean
 */
int StringCheck(char *s)
{
	int i = 0;

	for (; s[i] != '\0'; i++)
	{
		if (!isdigit(s[i]))
		{
			return (0);
		}
	}
	return (1);
}
/**
 * main - entry point
 * @argc: number of command-line arguments
 * @argv: array of actual arguments
 *
 * Return: 1 if the arguments passed aren't correct and 0 otherwise
 *
 */
int main(int argc, char  *argv[])
{
	int i;
	int result = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (StringCheck(argv[i]))
			{
				result += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", result);
		return (0);
	}
	else
	{
		printf("%d\n", 0);
		return (1);
	}

}
