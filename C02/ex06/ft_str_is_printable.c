/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jting <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 09:32:16 by jting             #+#    #+#             */
/*   Updated: 2021/12/01 12:38:29 by jting            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
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

    printf("%d", ft_str_is_printable(low));
	printf("%d", ft_str_is_printable(no));
}
*/
