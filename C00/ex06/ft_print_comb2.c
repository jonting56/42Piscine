/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jting <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 14:20:09 by jting             #+#    #+#             */
/*   Updated: 2021/12/12 15:41:57 by jting            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	ij[2];

	ij[0] = 0;
	ij[1] = 0;
	while (ij[0] <= 98)
	{
		while (ij[1] <= 99)
		{
			ft_putchar((ij[0] / 10) + '0');
			ft_putchar((ij[0] % 10) + '0');
			ft_putchar(' ');
			ft_putchar((ij[1] / 10) + '0');
			ft_putchar((ij[1] % 10) + '0');
			if (ij[0] != 98 || ij[1] != 99)
			{
				write(1, ", ", 2);
			}
		(ij[1])++;
		}
	(ij[0])++;
	ij[1] = 0;
	}
}