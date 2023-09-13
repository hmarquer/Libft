int	ft_atoi(char *str)
{
	int	neg;
	int	result;

	neg = 1;
	while (*str == '-' || *str == '+' || *str == '\n'
		|| *str == '\v' || *str == '\f' || *str == '\r' || *str == ' ')
	{
		if (*str == '-')
			neg *= -1;
		str++;
	}
	result = 0;
	while (*str != '\0' && *str >= '0' && *str <= '9')
	{
		result *= 10;
		result += (int)(*str) - 48;
		str++;
	}
	return (result * neg);
}
