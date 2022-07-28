#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
/**
 * str_concat - A function that Concatenates two strings
 * @s1: String 1
 * @s2: String 2
 *
 * Return: A pointer to a Character
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, l, m, count = 0;
	char *array;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	/* Length for s1 and s2 */
	for (i = 0; s1[i] != '\0'; i++)
		count++;

	for (j = 0; s2[j] != '\0'; j++)
		count++;

	array = malloc((count + 1) * sizeof(char));

	if (array == NULL)
		return (NULL);

	for (l = 0; l < i; l++)
		array[l] = s1[l];

	for (m = 0; m < j; m++, l++)
		array[l] = s2[m];

	array[l + 1] = '\0';

	return (array);
}
