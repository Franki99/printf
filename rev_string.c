#include "main.h"

/**
 * print_rev - prints the reversed string
 * @arguments: arguments
 * @buf: buffer pointer
 * @ibuf: index for buf
 * Return: number of characters printed
 */

int print_rev(va_list arguments, char *buf, unsigned int ibuf)
{
	char *s;
	unsigned int i;
	int j = 0;
	char nill[] = "(llun)";

	s = va_arg(arguments, char *);
	if (s == NULL)
	{
		for (i = 0; nill[i]; i++)
			ibuf = handl_buf(buf, nill[i], ibuf);
		return (6);
	}
	for (i = 0; s[i]; i++)
		;
	j = i - 1;
	for (; j >= 0; j--)
	{
		ibuf = handl_buf(buf, s[j], ibuf);
	}
	return (i);
}
