#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabets 10 times
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int line;

	for (line = 1; line <= 10; line++)
	{
		int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
	}
}


