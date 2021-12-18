/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jting <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 10:20:05 by jting             #+#    #+#             */
/*   Updated: 2021/12/06 15:38:29 by jting            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	ft_sign(void)
{
	int	i;
	int	negative;
	int	positive;

	positive = 0;
	negative = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '-')
		{
			negative++;
		}
		else
		{
			positive++;
		}
	}
	if (positive < negative)
	{
		return ('-');
	} 
		
void	ft_space(void)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ( str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
			   	str[i] == '\f' || str[i] == '\r')
		{	
			i++;
		}
	}
}

int	ft_atoi(char *str)
{
	int i;

	i = 0;
	
	ft_space();
	ft_sign();
}

#include <stdio.h>

int main()
{
	char a[35] = "----+++-923812931";
`
	printf("%d", ft_atoi(a));
