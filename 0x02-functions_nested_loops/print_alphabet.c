#include "main.h"

/**
 * main - prints the alphabet, in lowercase, followed by a new line
 *
 * Return: always 0.
 */

void print_alphabet(void)
{
	char letter;

	for(letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
}