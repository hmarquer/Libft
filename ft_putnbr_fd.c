/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmarquer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 10:22:40 by hmarquer          #+#    #+#             */
/*   Updated: 2023/09/19 10:22:41 by hmarquer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int		sgn;
	char	c;

	sgn = 1;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		sgn = -1;
	}
	if (n / 10)
		ft_putnbr_fd(n / 10 * sgn, fd);
	c = '0' + n % 10 * sgn;
	ft_putchar_fd(c, fd);
}
