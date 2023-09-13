char	*ft_strrchr(const char *string, int c)
{
	int	i;

	i = 0;
	while (string[i] != '\0')
	{
		i++;
	}
	while (i >= 0)
	{
		if (c == string[i])
		{
			return ((char *)string + i);
		}
		i--;
	}
	return (NULL);
}