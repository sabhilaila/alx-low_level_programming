#include "main.h"
#include <stdio.h>
void print_binary(unsigned long int n) 
{
int flag = 0;
int i;

for (i = 63; i >= 0; i--) 
{
unsigned long int mask = 1UL << i;
if (n & mask) 
{
putchar('1');
flag = 1;
}
else if (flag || i == 0) 
{
putchar('0');
}
}
}
