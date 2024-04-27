int	ft_strlen(char *str);
void	ft_putstr(char *str);

void	ft_show_unit(char **dict, char *digits)
{
	int	index;

	index = (digits[0] - '0') * 2 + 1;
	ft_putstr(dict[index]);
}

void	ft_show_tens(char **dict, char *digits)
{
	int	index;

	index = (18 + digits[0] - '0') * 2 + 1;
	if (digits[0] == '1')
		index = (10 + digits[1] - '0') * 2 + 1;
	ft_putstr(dict[index]);
	if (digits[1] != '0' && digits[0] != '1')
		ft_putstr(" ");
}

void	ft_show_hundreds(char **dict, char *digits)
{
	int	index;

	ft_show_unit(dict, digits);
	ft_putstr(" ");
	index = 28 * 2 + 1;
	ft_putstr(dict[index]);
	if (digits[1] != '0')
		ft_putstr(" ");
	else if (digits[2] != '0')
		ft_putstr(" and ");
}

void	ft_show_thousands(char **dict, int len)
{
	int	index;

	index = (29 + ((len - 1) / 3)) * 2 + 1;
	ft_putstr(dict[index]);
}

void    ft_show_result(char **dict, char *input, int len)
{
	if (len > 3)
	{
		ft_show_result(dict, input, len - 3);
		ft_putstr(" ");
		ft_show_thousands(dict, ft_strlen(input) - len + 3);
		if (input[len - 3] != '0' || input[len - 2] != '0')
			ft_putstr(" ");
		else if (input[len - 1] != '0')
			ft_putstr(" and ");
	}
	if (len >= 3 && input[len - 3] != '0')
		ft_show_hundreds(dict, &input[len - 3]);
	if (len >= 2 && input[len - 2] != '0')
		ft_show_tens(dict, &input[len - 2]);
	if (len >= 1 && input[len - 1] != '0' && input[len - 2] != '1')
		ft_show_unit(dict, &input[len - 1]);
	if (!ft_strlen(input))
		ft_putstr(dict[1]);
}
