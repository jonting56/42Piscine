/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jting <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 09:07:25 by jting             #+#    #+#             */
/*   Updated: 2021/12/07 15:29:09 by jting            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = nb;
	if (nb < 0)
	{
		return (0);
	}
	else if (nb == 0)
	{
		return (1);
	}
	while (i > 1)
	{
		nb = nb * (i - 1);
		i--;
	}
	return (nb);
}
/*
#include <stdio.h>

int main()
{
	int a = 5;
	int b = 6;

	printf("%d\n", ft_iterative_factorial(a));
	printf("%d\n", ft_iterative_factorial(b));
	printf("%d\n", ft_iterative_factorial(-5));
	printf("%d\n", ft_iterative_factorial(0));
}
*/
