/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jting <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 14:00:36 by jting             #+#    #+#             */
/*   Updated: 2021/12/04 16:09:48 by jting            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] < s2[i])
		{
			return (-1);
		}
		else if (s1[i] > s2[i])
		{	
			return (1);
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
int main ()
{
	char	s1[10] = "hello";
	char	s2[10] = "hello";
	char	s3[10] = "bye";
	char	s4[10];

	printf("%d", ft_strcmp(s1, s2));
	printf("%d", ft_strcmp(s1, s3));
	printf("%d", ft_strcmp(s1, s4));
	printf("%d", ft_strcmp(s3, s1));
}
*/
