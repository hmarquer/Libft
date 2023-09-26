/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmarquer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 10:38:05 by hmarquer          #+#    #+#             */
/*   Updated: 2023/09/13 10:38:20 by hmarquer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	sgn;
	int	result;

	sgn = 1;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			sgn = -1;
	result = 0;
	while (ft_isdigit(str[i]))
	{
		if (result > 2147483647 / 10
			|| (result == 2147483647 / 10 && str[i] - '0' > 7))
		{
			if (sgn == 1)
				return (2147483647);
			else
				return (-2147483648);
		}
		result = 10 * result + (str[i++] - '0');
	}
	return (result * sgn);
}
