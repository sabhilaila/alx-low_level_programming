#include <unistd.h>
/**
 * _putchar - writes the charcter c to stdout
 * @c: the character to print
 * Return: on siccess 1 or on error -1 is returned and errno is set proprly
 */

int _putchar(char c)
{
		return (write(1, &c, 1));
}
