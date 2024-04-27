char	*ft_remove_zeros(char *input)
{
	while (*input == '0')
		input++;
	return (input);
}
