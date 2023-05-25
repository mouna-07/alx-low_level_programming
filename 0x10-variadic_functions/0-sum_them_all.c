#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Retourne la somme de tous les params.
 * @o: Les parametres passes a la fonction.
 * @...: un nombre distinct de params pou calculer sum.
 *
 * Return: 0 sinon la somme des params.
 */
int sum_them_all(const unsigned int o, ...)
{
	va_list ap;
	unsigned int i, SUM = 0;

	va_start(ap, o);

	for (i = 0; i < o; i++)
		SUM += va_arg(ap, int);

	va_end(ap);

	return (SUM);
}
