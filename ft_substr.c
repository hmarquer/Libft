/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmarquer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 15:41:52 by hmarquer          #+#    #+#             */
/*   Updated: 2023/09/17 15:41:55 by hmarquer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	newlen;
	char	*substr;

	if (start + len >= ft_strlen(s))
		newlen = ft_strlen(s) - start + 1;
	else
		newlen = len + 1;
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	substr = malloc(newlen);
	if (!substr)
		return (0);
	i = 0;
	while (s[start + i] && i < len)
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = 0;
	return (substr);
}
