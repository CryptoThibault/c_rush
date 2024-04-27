#include <stdlib.h>

int	*ft_get_col(int **grid, int size, int x);
int	*ft_get_reverse(int *lign, int size);
int	ft_boxes_view(int *view, int size);

int	ft_check_input_row(char *input, int **grid, int y, int x)
{
	int	*rev;
	int	row_left;
	int	row_right;
	int	size;

	size = 4;
	if (x == size - 1)
	{
		row_left = input[(y + 8) * 2] - '0';
		row_right = input[(y + 12) * 2] - '0';
		if (row_left != ft_boxes_view(grid[y], size))
			return (0);
		rev = ft_get_reverse(grid[y], size);
		if (row_right != ft_boxes_view(rev, size))
		{
			free(rev);
			return (0);
		}
		free(rev);
	}
	return (1);
}

int	ft_check_input_col(char *input, int **grid, int y, int x)
{
	int	*col;
	int	*rev;
	int	col_up;
	int	col_down;
	int	size;

	size = 4;
	if (y == size - 1)
	{
		col_up = input[x * 2] - '0';
		col_down = input[(x + 4) * 2] - '0';
		col = ft_get_col(grid, size, x);
		if (col_up != ft_boxes_view(col, size))
		{
			free(col);
			return (0);
		}
		rev = ft_get_reverse(col, size);
		free(col);
		if (col_down != ft_boxes_view(rev, size))
		{
			free(rev);
			return (0);
		}
		free(rev);
	}
	return (1);
}
