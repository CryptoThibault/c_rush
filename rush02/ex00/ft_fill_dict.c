#include <stdlib.h>

char	*ft_read_file(char *file);
char    **ft_split(char *str, char *charset);

char	**ft_fill_dict(char *file)
{
	char	*tab;
	char	**dict;

	tab = ft_read_file(file);
	if (!tab)
		return (NULL);
	dict = ft_split(tab, " :\n");
	free(tab);
	if (!dict)
		return (NULL);
	return (dict);
}
