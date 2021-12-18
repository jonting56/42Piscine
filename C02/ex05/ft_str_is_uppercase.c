/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jting <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 09:28:28 by jting             #+#    #+#             */
/*   Updated: 2021/12/01 12:34:35 by jting            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 'Z' || str[i] < 'A')
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
    char no [10] = "AD";

    printf("%d", ft_str_is_uppercase(low));
    printf("%d", ft_str_is_uppercase(no));
}
*/
