/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jting <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 09:16:59 by jting             #+#    #+#             */
/*   Updated: 2021/12/01 12:33:32 by jting            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
		{
			return (0);
		}
	i++;
	}
	return (1);
}
/*
int main()
{
	char low [10] = "abcd";
	char no [10] = "AgD";

	printf("%d", ft_str_is_lowercase(low));
	printf("%d", ft_str_is_lowercase(no));
}
*/
