/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmarquer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 11:02:03 by hmarquer          #+#    #+#             */
/*   Updated: 2023/09/18 11:02:05 by hmarquer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static size_t	ft_numlen(int n, int base)
{
	size_t	count;

	count = 0;
	if (n <= 0)
		count++;
	while (n != 0)
	{
		n /= base;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*res;
	size_t	len;

	len = ft_numlen(n, 10);
	res = malloc(len + 1);
	if (!res)
		return (NULL);
	res[len] = '\0';
	if (n == 0)
		res[0] = '0';
	if (n < 0)
		res[0] = '-';
	while (n)
	{
		if (n > 0)
			res[--len] = (n % 10) + '0';
		else
			res[--len] = (- (n % 10)) + '0';
		n = n / 10;
	}
	return (res);
}
