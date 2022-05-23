#include "main.h"

/**
 * print_rot - prints the rot13'ed string
 * @arguments: arguments
 * @buf: buffer pointer
 * @ibuf: index for buf
 * Return: number of characters printed
 */

int print_rot(va_list arguments, char *buf, unsigned int ibuf)
{
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	unsigned int i, j, k;
	char nill[] = "(avyy)";
	char *s;
	
	s = va_arg(arguments, char *);
	if (s == NULL)
	{
		for (i = 0; nill[i]; i++)
			ibuf = handl_buf(buf, nill[i], ibuf);
		return (6);
	}
	for (i = 0; s[i]; i++)
	{
		for (k = j = 0; alpha[j]; j++)
		{
			if (s[i] == alpha[j])
			{
				k = 1;
				ibuf = handl_buf(buf, rot[j], ibuf);
				break;
			}
		}
		if (k == 0)
			ibuf = handl_buf(buf, s[i], ibuf);
	}
	return (i);
}
