#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <limits.h>

unsigned int _pow(int x, int y);
unsigned int binary_to_uint(char *b);
int _putchar(char c);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);

#endif
