#include <stdio.h>
#include <stdlib.h>
#include  "main.h"
/**
 * main - multiplies two numbers
 * @argc: Counts the number of arguments
 * @argv: shows the arguments
 *
 * Return: always 0 on success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 1; i < argc; i++)
	{
		if (i > 0)
		{
			int num1 = atoi(argv[i]);
			int num2 = atoi(argv[i + 1]);
			int mul = num1 * num2;

			printf("%d\n", mul);
		}
		else
		{
			printf("Error\n");
		}
	}
	return (0);
}
