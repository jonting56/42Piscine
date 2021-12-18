/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jting <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 10:02:57 by jting             #+#    #+#             */
/*   Updated: 2021/12/03 11:24:20 by jting            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	d_no;
	int	s_no;

	d_no = 0;
	s_no = 0;
	while (dest[d_no] != '\0')
	{
		d_no++;
	}
	while (src[s_no] != '\0')
	{
		dest[d_no] = src[s_no];
		d_no++;
		s_no++;
	}
	dest[d_no] = '\0';
	return (dest);
}
/*
int main()
{
	char a[20] = "apple";
	char b[10] = "banana";

	printf("%s", ft_strcat(a, b));
	return (0);
}
*/
