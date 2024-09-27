#include <unistd.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Return: Always 1 for success
 */
int main(void)
{
	char *text = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	unsigned int i;

	i = strlen(text);
	write(2, text, i);

	return (1);
}
