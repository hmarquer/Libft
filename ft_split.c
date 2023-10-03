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

static void	*free_strs(char **strs)
{
	int	i;

	i = 0;
	while (strs[i])
		free(strs[i++]);
	free(strs);
	return (NULL);
}

static size_t	ft_wordlen(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (*s && *s != c)
	{
		len++;
		s++;
	}
	return (len);
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
		return (NULL);
	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			len = ft_wordlen(s, c);
			res[i] = ft_substr(s, 0, len);
			if (!res[i++])
				return (free_strs(res));
			s += len;
		}
		else
			++s;
	}
	res[i] = 0;
	return (res);
}
