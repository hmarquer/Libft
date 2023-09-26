/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmarquer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 16:31:44 by hmarquer          #+#    #+#             */
/*   Updated: 2023/09/17 16:31:46 by hmarquer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int	front;
	int	back;
	int	len;
	
	if (!s1 || !set)
		return (0);
	front = 0;
	while (s1[front] && ft_strchr(set, (int)s1[front]))
		front++;
	back = ft_strlen(s1) - 1;
	while (back >= 0 && ft_strchr(set, (int)s1[back]))
		back--;
	if (back <= front)
		len = 1;
	else
		len = back - front + 1;
	return (ft_substr(s1, front, len));
}
