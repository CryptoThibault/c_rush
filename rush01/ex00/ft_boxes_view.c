int	ft_boxes_view(int *view, int size)
{
	int	n;
	int	high;
	int	count;

	n = 0;
	high = 0;
	count = 0;
	while (n < size)
	{
		if (view[n] > high)
		{
			high = view[n];
			count++;
		}
		n++;
	}
	return (count);
}
