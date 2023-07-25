#include "main.h"
/**
 * puss - print string
 *
 * @c: string
 * Return: number of byte
 */
int puss(char *c)
{
	int count = 0;

	if (c)
	{
		for (count = 0; c[count] != '\0'; count++)
		{
			putcar(c[count]);
		}
	}
	return (count);
}
