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
	int (*ops_fun)(int, int);
	int a, b;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	ops_fun = get_op_func(argv[2]);
	if (!ops_fun)
	{
		printf("Error\n");
		exit(99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if (!b && (argv[2][0] == '/' || argv[2][0] == '%'))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", ops_fun(a, b));
	return (0);
}
