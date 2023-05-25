#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - affiche les nombres suivis par une ligne.
 * @sep: string qui separe deux numeros.
 * @nb: nombre de int passes a la fonction.
 * @...:un nombre variable de nombres passes .
 */
void print_numbers(const char *sep, const unsigned int nb, ...)
{
	va_list numeros;
	unsigned int ind;

	va_start(numeros, nb);

	for (ind = 0; ind < nb; ind++)
	{
		printf("%d", va_arg(numeros, int));

		if (ind != (nb - 1) && sep != NULL)
			printf("%s", sep);
	}

	printf("\n");

	va_end(numeros);
}
