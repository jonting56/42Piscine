/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jting <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 15:42:22 by jting             #+#    #+#             */
/*   Updated: 2021/12/08 11:40:44 by jting            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb <= 0 || nb > 2147483647)
	{
		return (0);
	}
	else
	{
		while (i < nb && i < 46340)
		{
			if (nb == i * i)
			{
				return (i);
			}
		i++;
		}
	}
	return (0);
}
/*
#include <stdio.h>
int main()
{
	printf("%d\n", ft_sqrt(25));
	printf("%d\n", ft_sqrt(10));
	printf("%d\n", ft_sqrt(-10));
	printf("%d", ft_sqrt(3600));
}
*/
