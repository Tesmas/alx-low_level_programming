#include "main.h"

/**
 * print_alphabet - prints the alphabets in lowercase
 *
 * Return: void
 */

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
