#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/*
 * main - to print the name of the program
 * @argc: contains the number of arguments
 * @argv: contains the name of the arguments
 *
 * return 0 on sucess
 */
int main(int argc __attribute__ ((unused)), char  *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
