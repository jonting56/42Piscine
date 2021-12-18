/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jting <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 11:25:27 by jting             #+#    #+#             */
/*   Updated: 2021/12/08 11:38:35 by jting            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	i;

	i = nb;
	if (power < 0)
	{
		return (0);
	}
	else if ((power == 0 && nb == 0) || power == 0)
	{
		return (1);
	}
	else if (power > 1)
	{
		return (nb * ft_recursive_power (i, power -1));
	}
	return (nb);
}
/*
#include <stdio.h>
int main()
{
	printf("%d\n", ft_recursive_power(4, 3));
	printf("%d\n", ft_recursive_power(0, 0));
	printf("%d\n", ft_recursive_power(1, 0));
	printf("%d\n", ft_recursive_power(-5, 3));
	printf("%d", ft_recursive_power(2, 4));
}
*/
