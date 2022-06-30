#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: A program that prints a string to standard error
 * Return: 0 - SUCCESS
*/

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
