#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

char	*ft_read_file(char *file)
{
	char	*tab;
	int 	fd;
	int	max_size;

	fd = open(file, O_RDONLY);
	if (fd < 0)
		return (NULL);
	max_size = 2048;
	tab = malloc(sizeof(char) * max_size);
	if (!tab)
	{
		close(fd);
		return (NULL);
	}
	read(fd, tab, max_size);
	close(fd);
	return (tab);
}
