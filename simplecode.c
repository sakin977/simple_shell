#include <stdio.h>

/**
 * main - A for loop that prints numbers
 * a: number to be printed
 * Return: 0
 */
int main(void)
{

	int a;

	/* for loop execution */
	for (a = 0; a < 10; a = a + 1)
	{
		printf("value of a: %d\n", a);
	}

	return (0);
}
