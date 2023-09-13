/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmarquer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 10:39:20 by hmarquer          #+#    #+#             */
/*   Updated: 2023/09/13 10:39:21 by hmarquer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
