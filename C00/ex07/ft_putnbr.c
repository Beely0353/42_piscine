/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 12:14:35 by biaroun           #+#    #+#             */
/*   Updated: 2023/02/02 12:07:52 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	unsigned int	s;

	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		ft_putchar('-');
		s = -n;
	}
	else
		s = n;
	if (s > 9)
	{
		ft_putnbr(s / 10);
		s %= 10;
	}
	ft_putchar(s + '0');
}
/*int main()
{
	ft_putnbr(500);
}*/
