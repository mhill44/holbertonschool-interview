#include "sandpiles.h"
/**
* p - This prints a grid.
* @grid: This is the grid to be printed.
* Return: Returns nothing.
*/
void p(int grid[3][3])
{
	int i, j;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (j)
				printf(" ");
			printf("%d", grid[i][j]);
		}
		printf("\n");
	}
}

/**
* sandpiles_sum - sandpiles' addition.
* @grid1: Is for grid1.
* @grid2: Is for grid2.
* Return: Returns nothing.
*/
void sandpiles_sum(int grid1[3][3], int grid2[3][3])
{
	int i, j, count = 0;
	int grid3[3][3] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};
	int grid4[3][3] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};

	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
		{
			grid1[i][j] = grid1[i][j] + grid2[i][j];
			if (grid1[i][j] < 4)
				count++;
		}
	if (count != 9)
	{
		printf("=\n");
		p(grid1);
		for (i = 0; i < 3; i++)
			for (j = 0; j < 3; j++)
				if (grid1[i][j] >= 4)
				{
					grid3[i][j] += grid1[i][j] - 4;
					if ((i - 1) >= 0 && (i - 1) < 3)
						grid3[i - 1][j] += 1;
					if ((i + 1) >= 0 && (i + 1) < 3)
						grid3[i + 1][j] += 1;
					if ((j - 1) >= 0 && (j - 1) < 3)
						grid3[i][j - 1] += 1;
					if ((j + 1) >= 0 && (j + 1) < 3)
						grid3[i][j + 1] += 1;
				}
				else
					grid3[i][j] += grid1[i][j];
		sandpiles_sum(grid3, grid4);
		for (i = 0; i < 3; i++)
			for (j = 0; j < 3; j++)
				grid1[i][j] = grid3[i][j];
	}
}

