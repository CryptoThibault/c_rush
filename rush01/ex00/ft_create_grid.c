#include <stdlib.h>

int	**ft_create_grid(int size)
{
	int	**grid;
	int	x;
	int	y;

	grid = malloc(sizeof(int *) * size);
	if (!grid)
		return (NULL);
	y = 0;
	while (y < size)
	{
		grid[y] = malloc(sizeof(int) * size);
		x = 0;
		if (!grid[y])
			return (NULL);
		while (x < size)
			grid[y][x++] = 0;
		y++;
	}
	return (grid);
}
