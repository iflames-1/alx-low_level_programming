#include "main.h"

int _print(char *str)
{
	int i = 0, len = 0;

	while (str[len] != '\0')
		len++;

	for (i = 0; i < len; i++)
		_putchar(str[i]);
	_putchar('\n');

	return (1);
}

void error(int *num)
{
	if (num)
		free(num);
	_print("Error");
	exit(98);
}

int *convertToInt(char *str)
{
	int is_negative = 0, next_is_char = 0;
	int i = 0, res = 0, *num = &res, len = 0, digit = 0;

	while (str[len] != '\0')
		len++;

	num = malloc(sizeof(int) * len);
	if (num == NULL)
		error(num);

	if (str[i] == '-')
	{
		++is_negative;
		++i;
	}
	while (i < len && next_is_char == 0)
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			digit = str[i] - 48;

			if (is_negative)
				digit = -digit;

			*num = *num * 10 + digit;

			next_is_char = 1;
			if (str[i + 1] < '0' || str[i + 1] > '9')
				break;

			next_is_char = 0;
		}
		i++;
	}
	if (next_is_char == 1 && str[i + 1] != '\0')
		error(num);

	return (num);
}

int main(int argc, char *argv[])
{
	int *num1;
	(void)argc;

	if (argc != 3)
	{
		_print("Error");
		exit(98);
	}

	num1 = convertToInt(argv[1]);
	printf("%d\n", *num1);

	return (0);
}
