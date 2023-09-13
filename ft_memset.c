void	*memset(void *str, int c, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		str[i] = c;
		i++;
	}
	return (str);
}