
#include <time.h>

#include <stdio.h>

/**
 * main - prints a text accoriding number
 * return: always (Success)
 *
 */

int main(void)

{
        int n, lastd;

        srand(time(0));
        n = rand() - RAND_MAX / 2;
        lastd = n % 10;
        if (lastd > 5)
        {
                printf("Last digit of %d is %d and is greater than 5\n", n, lastd);
        }
        else if (lastd == 0)
        {
                printf("Last digit of %d is %d and is 0\n", n, lastd);
         {
                printf("Last digit of %d is %d and is 0\n", n, lastd);
        }
        else if (lastd < 6 && lastd != 0)
{
