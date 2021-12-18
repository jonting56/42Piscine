/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jting <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 10:41:31 by jting             #+#    #+#             */
/*   Updated: 2021/12/07 15:31:08 by jting            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
	{
		return (0);
	}
	else if (nb == 0 || nb == 1)
	{
		return (1);
	}
	else
	{
		return (nb * ft_recursive_factorial(nb - 1));
	}
}
/*
#include <stdio.h>
int main()
{
	printf("%d\n", ft_recursive_factorial(5));
	printf("%d\n", ft_recursive_factorial(0));
	printf("%d", ft_recursive_factorial(-5));
}
*/
