/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ strrchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmarquer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 10:37:34 by hmarquer          #+#    #+#             */
/*   Updated: 2023/09/13 10:37:36 by hmarquer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *string, int c)
{
	int	i;

	i = 0;
	while (string[i] != '\0')
		i++;
	while (i >= 0)
	{
		if (c == string[i])
			return ((char *)string + i);
		i--;
	}
	return (NULL);
}
