int	ft_is_in_row(int cell, int *row, int x);
int     ft_is_in_col(int cell, int **grid, int y, int x);
int	ft_check_input_row(char *input, int **grid, int y, int x);
int	ft_check_input_col(char *input, int **grid, int y, int x);

int	ft_check_cell(char *input, int **grid, int y, int x)
{
	if (ft_is_in_row(grid[y][x], grid[y], x))
		return (0);
	if (ft_is_in_col(grid[y][x], grid, y, x))
		return (0);
	if (!ft_check_input_row(input, grid, y, x))
		return(0);
	if (!ft_check_input_col(input, grid, y, x))
		return(0);
	return (1);
}

int	ft_back_tracking(int **grid, int *y, int *x, int size)
{
	if (grid[*y][*x] == size)
	{
		grid[*y][*x] = 0;
		if (!*x)
		{
			if (!*y)
				return (1);
			(*y)--;
			*x = size - 1;
		}
		else
			(*x)--;
		if (grid[*y][*x] == size)
			return (ft_back_tracking(grid, y, x, size));
	}
	return (0);
}

int     ft_solve_grid(char *input, int **grid, int size)
{
	int	x;
	int	y;

	y = 0;
	x = 0;
	while (y < size)
	{
		grid[y][x]++;
		if (ft_check_cell(input, grid, y, x))
		{
			if (x == size - 1)
			{
				y++;
				x = 0;
			}
			else
				x++;
		}
		else
			if (ft_back_tracking(grid, &y, &x, size))
				return (0);
	}
	return (1);
}
