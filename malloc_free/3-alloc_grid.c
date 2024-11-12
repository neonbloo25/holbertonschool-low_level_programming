#include <stddef.h>
#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - makes 2d array
 * @width: primary vector
 * @height: secondary vector
 * Return: Pointer to arr2d on success, else Null
 */
int **alloc_grid(int width, int height)
{
	int **PiARR, x, i;

	if (width <= 0 || height <= 0)
		return (NULL);

	PiARR = (int **)malloc(sizeof(int *) * height);

	if (PiARR != NULL)
	{
		for (i = 0; i < height; i++)
		{
			PiARR[i] = (int *)malloc(sizeof(int) * width);
			if (PiARR[i] != NULL)
			{
				for (x = 0; x < width; x++)
					PiARR[i][x] = 0;
			}
			else
			{
				while (i >= 0)
				{
					free(PiARR[i]);
					i--;
				}
				free(PiARR);
				return (NULL);
			}
		}
		return (PiARR);
	}
	else
	{
		return (NULL);
	}
}
