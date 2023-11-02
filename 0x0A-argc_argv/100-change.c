#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins
 * to make change for an amount of money.
 *
 * Description: prints the minimum number of coins
 * to make change for an amount of money.
 * @argc: The number of argunment
 * @argv: The list of argument
 *
 * Return: 0 (Success)
 */


int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int money = atoi(argv[1]);
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
