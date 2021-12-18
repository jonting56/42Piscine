/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jting <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 15:42:30 by jting             #+#    #+#             */
/*   Updated: 2021/12/12 15:59:01 by jting            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2", 2);
		nb = 147483648;
	}
	else if (nb < 0) 
	{
		write(1, "-", 1);
		nb *= -1;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else if (nb < 9)
	{
		ft_putchar(nb + '0');
	}
}
/*
#include <stdio.h>
int main()
{
	ft_putnbr(400);
	write(1, "\n", 1);
	ft_putnbr(-2147483648);
}
*/
