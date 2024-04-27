int	ft_is_in_row(int cell, int *row, int x)
{
	while (x--)
		if (cell == row[x])
			return (1);
	return (0);
}

int     ft_is_in_col(int cell, int **grid, int y, int x)
{
	while (y--)
		if (cell == grid[y][x])
			return (1);
	return (0);
}
