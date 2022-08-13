#include <stdio.h>

/**
 * 
 *
 */
void start(void) __attribute__ ((constructor));
void start(void) 
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
