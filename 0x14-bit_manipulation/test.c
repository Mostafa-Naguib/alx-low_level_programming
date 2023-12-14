#include <stdio.h>


int main(void)
{
	unsigned long int n = 23;

	int mask = 1 << (sizeof(n) * 8);

	printf("==> %i\n", mask);
}
