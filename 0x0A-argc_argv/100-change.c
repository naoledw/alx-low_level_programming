#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - prints the minimum number of coins to
 *        make change for an amount of money.
 * @argc: number of arguments.
 * @argv: array of arguments.
 * Return: always 0.
 */

int main(int argc, char *argv[])
{
	int cents, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		cents = atoi(argv[1]);

		if (cents < 0)
		{
			printf("%d\n", 0);
			return (0);
		}
		else
		{
			while (cents > 0)
			{
				coins++;
				if ((cents - 25) >= 0)
				{
					cents -= 25;
					continue;
				}
				
				if ((cents - 10) >= 0)
				{
					cents -= 10;
					continue;
				}
				
				if ((cents - 5) >= 0)
				{
					cents -= 5;
					continue;
				}
				
				if ((cents - 2) >= 0)
				{
					cents -= 2;
					continue;
				}
				cents--;
			}
			
			printf("%d\n", coins);

		}
	}

	return (0);
}

