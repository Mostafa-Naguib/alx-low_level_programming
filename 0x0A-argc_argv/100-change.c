#include <stdio.h>
#include <stdlib.h>
int _atoi(char *s);

/**
 * main - prints the minimum number of coins
 * to make change for an amount of money.
 *
 * Description: prints the minimum number of coins
 * to make change for an amount of money.
 * @argc: The number of argument
 * @argv: The list of argument
 *
 * Return: 0 (Success)
 */


int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int money = _atoi(argv[1]);
		int list[] = {25, 10, 5, 2, 1};
		int changes = 0;
		int i;

		if (money < 0)
		{
			printf("%d\n", 0);
		}
		else
		{
			for (i = 0; i <= 5; i++)
			{
				if (money >= list[i])
				{
					changes += money / list[i];
					money = money % list[i];
					if (money % list[i] == 0)
					{
						break;
					}
				}
			}
			printf("%d\n", changes);

		}
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}


/**
 * _atoi - Convert string to int
 *
 * Description: Convert a string to an integer.
 * @s: The string
 *
 * Return: The integer number
 */

int _atoi(char *s)
{
	double result = 0;
	int sign = 1;

	while (*s == ' ' || *s == '\t' || *s == '\n')
		s++;

	if (*s == '-' || *s == '+')
	{
		sign = (*s == '-') ? -1 : 1;
		s++;
	}

	while (*s >= '0' && *s <= '9')
	{
		result = result * 10 + (*s - '0');
		s++;
	}

	return ((result * sign));
}

