#include "main.h"
/**
 * leet - encode into 1337
 * @t: input value
 * Return: t value
 */
char *leet(char *t)
{
	int i, j;
	char k1[] = "aAeEoOtTlL";
	char k2[] = "4433007711";

	for (i = 0; t[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (t[i] == k1[j])
			{
				t[i] = k2[j];
			}
		}
	}
	return (t);
}

