#include <stdio.h>
#include "main.h"
/*
 * main - prints the name of the program
 * @argc: contains the number of arguments
 * @argv: contains the name of the arguments
 *
 * Return: always 0 on sucess
 */
int main(char *argv[], int argc __attribute__ ((unused)))
{
	printf("%s\n", *argv);
	return (0);
}
