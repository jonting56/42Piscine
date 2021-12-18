/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jting <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 11:32:51 by jting             #+#    #+#             */
/*   Updated: 2021/12/12 16:17:21 by jting            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int temp;
	int	i;

	i = 0;
	while (size > i)
	{
		temp = tab[size];
		tab[size] = tab[i];
		tab[i] = temp;
		size--;
		i++;
	}
}

#include <stdio.h>
int main()
{
	int i = 0;
	int tab[5] = {1, 2, 3, 4, 5};
	while (tab[i])
	{
	printf("%d", tab[i]); 
	i++;
	}
	i = 0;

	ft_rev_int_tab(tab, 5);
	while (tab[i])
	{
		printf("%d", tab[i]);
		i++;
	}
}
