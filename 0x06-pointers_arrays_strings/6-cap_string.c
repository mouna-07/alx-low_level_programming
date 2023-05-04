#include "main.h"

/**
 * cap_string - Capitalizes a string.
 * @strg: string that will be capitalized.
 *
 * Return: A pointer to the changed string.
 */
char *cap_string(char *strg)
{
	int inx = 0;

	while (strg[inx])
	{
		while (!(strg[inx] >= 'a' && strg[inx] <= 'z'))
			inx++;

		if (strg[inx - 1] == ' ' ||
		    strg[inx - 1] == '\t' ||
		    strg[inx - 1] == '\n' ||
		    strg[inx - 1] == ',' ||
		    strg[inx - 1] == ';' ||
		    strg[inx - 1] == '.' ||
		    strg[inx - 1] == '!' ||
		    strg[inx - 1] == '?' ||
		    strg[inx - 1] == '"' ||
		    strg[inx - 1] == '(' ||
		    strg[inx - 1] == ')' ||
		    strg[inx - 1] == '{' ||
		    strg[inx - 1] == '}' ||
		    inx == 0)
			strg[inx] -= 32;

		inx++;
	}

	return (strg);
}
