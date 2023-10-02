#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[(argc - 1)]) * atoi(argv[(argc - 2)]));
		return (0);
	}
	printf("Error\n");
	return (1);
}