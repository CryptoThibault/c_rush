#include <stdlib.h>

int	*ft_get_col(int **grid, int size, int x)
{
	int	*col;
	int	y;

	col = malloc(sizeof(int) * size);
	y = 0;
	while (y < size)
	{
		col[y] = grid[y][x];
		y++;
	}
	return (col);
}

int	*ft_get_reverse(int *lign, int size)
{
	int	*rev;
	int	n;
	int	s;

	rev = malloc(sizeof(int) * size);
	n = 0;
	s = size - 1;
	while (n < size)
		rev[n++] = lign[s--];
	return (rev);
}
