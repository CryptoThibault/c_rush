void	ft_putstr(char *str);

int	ft_show_error(int error)
{
	if (error == 1)
		ft_putstr("Error\n");
	if (error == 2)
		ft_putstr("Dict error\n");
	return (error);
}
