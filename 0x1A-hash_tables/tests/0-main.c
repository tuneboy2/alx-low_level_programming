#include "hash_tables.h"
#include <stdio.h>

int main(void)
{
	hash_table_t *ht;

	ht = hash_table_create(1024);
	printf("_____");
	printf("%p\n", (void *)ht);
    return (EXIT_SUCCESS);
}
