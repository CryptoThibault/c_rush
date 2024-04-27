int	ft_strlen(char *str);

int     ft_error_input(char *input)
{
	int	i;

	if (ft_strlen(input) != 31)
		return (1);
	i = 0;
	while (input[i])
	{
		if (i % 2)
		{
			if (input[i] != ' ')
				return (1);
		}
		else
			if (!(input[i] >= '1' && input[i] <= '4'))
				return (1);
		i++;
	}
	return (0);
}
