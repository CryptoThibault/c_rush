void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	i;
	int	j;

	if (x < 1)
		return ;
	i = 0;
	while (i++ < y)
	{
		j = 0;
		while (j++ < x)
			if (i == 1 || i == y)
				if (j == 1)
					ft_putchar('A');
				else if (j == x)
					ft_putchar('C');
				else
					ft_putchar('B');
			else
				if (j == 1 || j == x)
					ft_putchar('B');
				else
					ft_putchar(' ');
		ft_putchar('\n');
	}
}
