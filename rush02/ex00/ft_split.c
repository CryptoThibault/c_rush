#include <stdlib.h>

int	ft_is_charset(char c, char *charset)
{
	while (*charset)
	{
		if (c == *charset++)
			return (1);
	}
	return (0);
}

void	ft_fill_tab(char **tab, char *str, char *charset)
{
	int	len;

	while (*str)
	{
		len = 0;
		while (ft_is_charset(*str, charset))
			str++;
		while (*str && !ft_is_charset(str[len], charset))
			len++;
		if (len == 0)
			break ;
		*tab = malloc(sizeof(char) * (len + 1));
		if (!*tab)
			break ;
		while (*str && !ft_is_charset(*str, charset))
			*(*tab)++ = *str++;
		**tab = 0;
		*tab -= len;
		tab++;
	}
	*tab = 0;
}

char	**ft_split(char	*str, char *charset)
{
	char	**tab;
	int	len;

	len = 0;
	while (str[len])
		len++;
	tab = malloc(sizeof(char *) * (len / 2 + 2));
	if (!tab)
		return (0);
	ft_fill_tab(tab, str, charset);
	return (tab);
}
