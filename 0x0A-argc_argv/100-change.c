#include <stdio.h>
#include <stdlib.h>

/**
 *main - prints the minimum number of coins
 *to make change for an amount of money
 *@argc: argument count
 *@argv: argument vector
 *Return: 0 if success and 1 if otherwise
 */
int main(int argc, char *argv[])
{
	int num = atoi(argv[1]);
	int cents = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	while (num > 0)
	{
		if (num >= 25)
		{
			num -= 25;
		}
		else if (num >= 10)
		{
			num -= 10;
		}
		else if (num >= 5)
		{
			num -= 5;
		}
		else if (num >= 2)
		{
			num -= 2;
		}
		else
		{
			num -= 1;
		}
		cents++;
	}

	printf("%d\n", cents);
	return (0);
}
