#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;
    int ret;

    ht = hash_table_create(1024);
  
    ret = hash_table_set(ht, "98", "cool");
    hash_table_set(ht, "dram", "ghs");
    hash_table_set(ht, "another", "");
    hash_table_set(ht, "vivency", "aa");
    hash_table_set(ht, "dram", "ggg");
    printf("%d\n", ret);
    return (EXIT_SUCCESS);
}
