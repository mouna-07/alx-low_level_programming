#include "main.h"

/**
 * print_square - prints a square, followed by a new line;
 * @taille: size of the square
 */
void print_square(int taille)
{
	if (taille <= 0)
	{
		_putchar('\n');
	} else
	{
		int i, j;

		for (i = 0; i < taille; i++)
		{
			for (j = 0; j < taille; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
