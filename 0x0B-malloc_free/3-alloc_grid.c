#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @H: hauteur
 * @L: largeur
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int H, int L)
{
	int **mou;
	int i, j;

	if (H <= 0 || L <= 0)
		return (NULL);

	mou = malloc(sizeof(int *) * L);

	if (mou == NULL)
		return (NULL);

	for (i = 0; i < L; i++)
	{
		mou[i] = malloc(sizeof(int) * H);

		if (mou[i] == NULL)
		{
			for (; i >= 0; i--)
				free(mou[i]);

			free(mou);
			return (NULL);
		}
	}

	for (i = 0; i < L; i++)
	{
		for (j = 0; j < H; j++)
			mou[i][j] = 0;
	}

	return (mou);
}
