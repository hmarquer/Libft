/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_slit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmarquer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 10:34:24 by hmarquer          #+#    #+#             */
/*   Updated: 2023/09/18 10:34:26 by hmarquer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_wordcount(char const *s, char c)
{
	size_t	res;
	int		i;

	res = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			res++;
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (res);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	size_t	len;
	size_t	i;

	if (!s)
		return (0);
	res = (char **) malloc(8 * (ft_wordcount(s, c) + 1));
	if (!res)
		return (0);
	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			len = 0;
			while (*s && *s != c && ++len)
				++s;
			res[i] = ft_substr(s - len, 0, len);
			if (!res[i])
			{
				i--;
				while (i >= 0)
					free(res[i--]);
				free(res);
				return (NULL);
			}
			i++;
		}
		else
			++s;
	}
	res[i] = 0;
	return (res);
}
