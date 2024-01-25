#include <stdio.h>
#include "main.h"
/**
 * main - prints all the arguments it receives
 * @argc: contains the number of arguments
 * @argv: contains all the arguments
 *
 * Return: always 0 on success
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
