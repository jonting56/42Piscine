/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jting <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 11:15:46 by jting             #+#    #+#             */
/*   Updated: 2021/12/01 12:43:16 by jting            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
				str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}
/*
int main()
{
    char a[] = "HE38A";
    printf("%s", ft_strlowcase(a));
}
*/
