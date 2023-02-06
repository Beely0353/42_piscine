/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 09:13:01 by biaroun           #+#    #+#             */
/*   Updated: 2023/02/01 18:08:32 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_display(int a, int b, int c)
{
	char	chr;

	chr = a + 48;
	write(1, &chr, 1);
	chr = b + 48;
	write(1, &chr, 1);
	chr = c + 48;
	write(1, &chr, 1);
	if (a != 7 || b != 8 || c != 9)
		write(1, ", ", 2);
}

void	ft_print_comb(void)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	while (i < 10)
	{
		j = i + 1;
		while (j < 10)
		{
			k = j + 1;
			while (k < 10)
			{
				ft_display(i, j, k);
				k++;
			}
			j++;
		}
		i++;
	}
}
