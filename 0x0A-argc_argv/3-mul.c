#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 *
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: always returns 0
 */

int main(int argc, char *argv[])
{
	int firstNumber, secondNumber, mul;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	firstNumber = atoi(argv[1]);
	secondNumber = atoi(argv[2]);
	mul = firstNumber * secondNumber;

	printf("%d\n", mul);

	return (0);
}
