#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: 0 - SUCCESS
 */

int main(void)
{
	struct dog my_dog;

	my_dog.name = "Bingo";
	my_dog.age = 3.5;
	my_dog.owner = "Ade";

	printf("My name is %s and I am %f years old -): Woof!\n", my_dog.name, my_dog.age);
	return (0);
}
