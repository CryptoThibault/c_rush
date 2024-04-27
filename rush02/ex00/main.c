int	ft_strlen(char *str);
void	ft_putstr(char *str);
int	ft_error_input(char *file, char *input);
int	ft_show_error(int error);
char	**ft_fill_dict(char *file);
char	*ft_remove_zeros(char *input);
void	ft_show_result(char **dict, char *input, int len);
void	ft_delete_dict(char **dict);

int	main(int ac, char **av)
{
	char	**dict;
	char	*file;

	if (ac != 2 && ac != 3)
		return (ft_show_error(1));
	file = "numbers.dict";
	if (ac == 3)
		file = av[1];
	if (ft_error_input(file, av[ac - 1]))
		return (ft_show_error(1));
	dict = ft_fill_dict(file);
	if (!dict)
		return (ft_show_error(2));
	av[ac - 1] = ft_remove_zeros(av[ac - 1]);
	ft_show_result(dict, av[ac - 1], ft_strlen(av[ac - 1]));
	ft_delete_dict(dict);
	return (0);
}
