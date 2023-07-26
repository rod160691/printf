#include "main.h"
/**
 * putcar - print a character
 * @c: char input
 * Return: 1
 */
int putcar(char c)
{
	return (write(1, &c, 1));
}
