#include "main.h"

/**
 * main - Determine return value of character
 *
 * Return: Always 0 (Success)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
