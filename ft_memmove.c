/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmarquer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 10:44:44 by hmarquer          #+#    #+#             */
/*   Updated: 2023/09/13 10:44:45 by hmarquer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dest, const void *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (dest == NULL && src == NULL)
		return (NULL);
	if (dest > src && dest < src + n)
	{
		while (i < n)
		{
			*(dest + n - 1 - i) = *(src + n - 1 - i);
			i++;
		}
	}
	else
	{
		while (i < n)
		{
			*(dest + i) = *(src + i);
			i++;
		}
	}
	return (dest);
}
