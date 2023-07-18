#include <stdio.h>
/**
 * main - main function
 *
 * Return: always 0
 */
int main(void)
{
	int a;

	char low;

	for (a = '0' ; a <= '9' ; a++)
		putchar (a);
	for (low = 'a'; low <= 'f' ; low++)
		putchar (low);
	putchar ('\n');
	return (0);
}
