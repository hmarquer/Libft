unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len;

	len = 0;
	while (*(src + len) != '\0')
		len++;
	if (size != 0)
	{
		i = 0;
		while (i < size - 1 && i < len)
		{
			*(dest + i) = *(src + i);
			i++;
		}
		*(dest + i) = '\0';
	}
	return (len);
}