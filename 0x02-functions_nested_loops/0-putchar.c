#include "main.h"
#include <string.h>
#include <stdio.h>


int main(void)
{
	char *str = "_putchar";
	int i;

	for (i = 0; i < strlen(str); i++)
	{
		_putchar('A' + str[i]);
	}

	return (0);
}

