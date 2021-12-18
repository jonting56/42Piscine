/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jting <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 11:02:30 by jting             #+#    #+#             */
/*   Updated: 2021/12/08 11:10:55 by jting            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	j;

	j = nb;
	i = power;
	if (power < 0)
	{
		return (0);
	}
	else if ((power == 0 && nb == 0) || power == 0)
	{
		return (1);
	}
	else
	{
		while (i > 1)
		{
			nb = j * nb;
			i--;
		}
		return (nb);
	}
}
/*
#include <stdio.h>
int main()
{
	printf("%d\n", ft_iterative_power(0, 4));
	printf("%d\n", ft_iterative_power(4, 0));
	printf("%d\n", ft_iterative_power(0, 0));
	printf("%d", ft_iterative_power(5, 3));
}
*/
