#include <unistd.h>

/**
* _putchar - writes a character to the stdout
* @c: character to be written
* Return: 0 when success, otherwise -1
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
