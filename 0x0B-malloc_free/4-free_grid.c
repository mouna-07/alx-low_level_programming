#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - free 2D array
 * @gridy: 2Dimensions grid
 * @h: heiggth of grid
 * Description: free memory grid
 * Return: nothing
 *
 **/
void free_grid(int **gridy, int h)
{
	int k;

	for (k = 0; k < h; k++)
	{
		free(gridy[k]);
	}
	free(gridy);
}
