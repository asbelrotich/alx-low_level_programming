#include <stdio.h>
#include "main.h"
/**
 * main - to print the number of arguments passed
 * @argc: contains number of arguments
 * @argv: contains the arrays ofarguments
 *
 * Return: always 0 on success
 */
int main(int argc, char *argv[] __attribute__ ((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
