#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - affiche les nombres suivis par une ligne.
 * @sep: string qui separe deux numeros.
 * @nb: nombre de int passes a la fonction.
 * @...:un nombre variable de nombres passes .
 */
void print_strings(const char *sep, const unsigned int nb, ...)
{
	va_list strings;
	char *str;
	unsigned int ind;

	va_start(strings, nb);

	for (ind = 0; ind < nb; ind++)
	{
		str = va_arg(strings, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (ind != (nb - 1) && sep != NULL)
			printf("%s", sep);
	}

	printf("\n");

	va_end(strings);
}
