int	ft_str_end_with(char *str, char *end);
int	ft_strlen(char *str);
int	ft_str_is_numeric(char *str);

int	ft_error_input(char *file, char *input)
{
	if (!ft_str_end_with(file, ".dict"))
		return (1);
	if (ft_strlen(input) > 66)
		return (1);
	if (!ft_str_is_numeric(input))
		return (1);
	return (0);
}
