#include "main.h"

/**
 * *leet - function that encodes a string into 1337
 * @str: string that will be encoded
 *
 * Return: encoded string
 */

char *leet(char *str)
{
	int index = 0, index2;
	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (str[index2])
	{
		for (index2 = 0; index2 <= 7; index2++)
		{
			if (str[index2] == leet[index2] || str[index2] - 32 == leet[index2])
				str[index2] = index2 + '0';
		}
		index2++;
	}
	return (str);
}
