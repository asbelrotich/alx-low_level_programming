#include <stdio.h>
#include "dog.h"
/**
 * main - check the code
 *
 * return: always 0
 */
int main(void)
{
	struct dog my_dog;

	my_dog.name = "Poppy";
	my_dog.age = 3.5;
	my_dog.owner = "bob";
	printf("My name is %s, and iam %.1f :) - Woof!\n", my_dog.name, my_dog.age);
	return (0);
}
