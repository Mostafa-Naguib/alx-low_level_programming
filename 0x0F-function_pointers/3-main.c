#include "3-calc.h"

/**
 * main - Entry point
 *
 * Description: 'the program's description'
 * @argc: The number of arguments
 * @argv: The array that contains the argument data
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char **argv)
{
	int (*op)(int, int);
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	op = get_op_func(argv[2]);
	if (!op)
	{
		printf("Error\n");
		exit(99);
	}

	if ((argv[2][0] == '/' || argv[2][0] == '%') && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}


	result = op(atoi(argv[1]), atoi(argv[3]));

	printf("%d\n", result);

	return (0);
}

