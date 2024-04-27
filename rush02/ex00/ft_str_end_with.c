int	ft_str_end_with(char *str, char *end)
{
	while (*str)
	{
		while (*str && *str == *end)
		{
			str++;
			end++;
		}
		str++;
	}
	return (!*end);
}
