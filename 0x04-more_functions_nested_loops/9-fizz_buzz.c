#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: Write a program that prints the numbers
 * from 1 to 100, followed by a new line. But for
 * multiples of three print Fizz instead of the number
 * and for the multiples of five print Buzz. For
 * numbers which are multiples of both three and five print FizzBuzz.
 * Return: 0 - SUCCESS
 */

int main(void)
{
	int no = 1;

	while (no <= 100)
	{
		if (no % 3 == 0 && no % 5 == 0)
			printf("FizzBuzz");

		else if (no % 5 == 0)
			printf("Buzz");

		else if (no % 3 == 0)
			printf("Fizz");

		else
			printf("%d", no);

		if (no != 100)
			printf(" ");

		no++;
	}

	putchar(10);
	return (0);
}
