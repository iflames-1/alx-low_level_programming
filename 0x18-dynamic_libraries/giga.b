#include <stdio.h>
#include <stdlib.h>

/**
 * main - Makes Julien win the jackpot
 * @argc: arument count
 * @argv: argument vector
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	if (argc == 7)
	{
		int arg1 = atoi(argv[1]);
		int arg2 = atoi(argv[2]);
		int arg3 = atoi(argv[3]);
		int arg4 = atoi(argv[4]);
		int arg5 = atoi(argv[5]);
		int arg6 = atoi(argv[6]);

		if (arg1 == 9 && arg2 == 8 && arg3 == 10 && arg4 == 24 &&
			arg5 == 75 && arg6 == 9)
		{
			printf("--> Please make me win!\n");
			return (0);
		}
	}
	return (0);
}
