#include <stdio.h>

/**
 * start - A function that's called before main
 *
 * Return: Void
 */
void start(void) __attribute__((constructor));
void start(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
