#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int main(int ac, char **av)
{
	int res;

	if (ac < 2)
	{
		dprintf(2, "Usage: %s filename text\n", av[0]);
		exit(1);
	}

	res = create_file(av[1], NULL);
	printf("-> %i)\n", res);
	return (0);
}
