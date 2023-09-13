int	ft_memcmp(const void *str1, const void *str2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (*(str1 + i) != *(str2 + i))
		{
			return (*(str1 + i) - *(str2 + i));
		}
		i++;
	}
	return (0);
}