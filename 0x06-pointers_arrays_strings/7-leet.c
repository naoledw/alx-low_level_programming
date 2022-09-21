#include "main.h"

/**
 * leet. - encodes a string into 1337.
 * @s: string
 * Return: always 0.
 */

char *leet(char *s)
{
	int i = 0, j;

	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (s[i])
	{
		for (j = 0; j <= 7; j++)
		{
			if (s[i] == leet[j] || s[i] - 32 == leet[j])
				s[i] = j + '0';
		}

		i++;
	}

	return (s);
}
