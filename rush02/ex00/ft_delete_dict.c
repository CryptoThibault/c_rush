#include <stdlib.h>

void	ft_delete_dict(char **dict)
{
	int	i;

	i = 0;
	while (dict[i])
		free(dict[i++]);
	free(dict);
}
