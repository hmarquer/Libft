void	bzero(void *str, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		*(str + i) = 0;
		i++;
	}
}