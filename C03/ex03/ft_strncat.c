/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jting <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 11:01:32 by jting             #+#    #+#             */
/*   Updated: 2021/12/04 15:01:24 by jting            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	d_no;
	unsigned int	s_no;

	d_no = 0;
	s_no = 0;
	while (dest[d_no] != '\0')
	{
		d_no++;
	}
	while (src[s_no] != '\0' && s_no < nb)
	{
		dest[d_no] = src[s_no];
		d_no++;
		s_no++;
	}
	dest[d_no] = '\0';
	return (dest);
}
/*
#include <stdio.h>

int main()
{
	char a[20] = "hello";
	char b[20] = "world";

	printf("%s", ft_strncat(a, b, 3));
}
*/
