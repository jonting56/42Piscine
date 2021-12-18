/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jting <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 09:31:37 by jting             #+#    #+#             */
/*   Updated: 2021/12/06 09:45:29 by jting            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((i < n) && ((s1[i] || s2[i]) != '\0'))
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
    char    s1[10] = "hello";
    char    s2[10] = "hello";
    char    s3[10] = "hi";
    char    s4[10];

    printf("%d", ft_strncmp(s1, s2, 3));
    printf("%d", ft_strncmp(s1, s3, 1));
    printf("%d", ft_strncmp(s1, s4, 10));
	printf("%d", ft_strncmp(s4, s1, 0));
	printf("%d", ft_strncmp(s4, s1, 5));
}
*/
