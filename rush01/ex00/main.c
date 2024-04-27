int	ft_error_input(char *input);
int	ft_show_error(int error);
int	**ft_create_grid(int size);
int	ft_solve_grid(char *input, int **grid, int size);
void    ft_show_grid(int **grid, int size);
void	ft_delete_grid(int **grid, int size);

int	main(int ac, char **av)
{
	int	size;
	int	**grid;

	if (ac != 2 || ft_error_input(av[1]))
		return (ft_show_error(1));
	size = 4;
	grid = ft_create_grid(size);
	if (!grid)
		return (ft_show_error(2));
	if (!ft_solve_grid(av[1], grid, size))
	{
		ft_delete_grid(grid, size);
		return (ft_show_error(3));
	}
	ft_show_grid(grid, size);
	ft_delete_grid(grid, size);
	return (0);
}
