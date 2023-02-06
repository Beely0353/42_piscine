/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 15:07:35 by biaroun           #+#    #+#             */
/*   Updated: 2023/02/05 16:23:09 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_printline(int x, char first, char middle, char last)
{
	int	i;

	i = 1;
	while (i <= x)
	{
		if (i == 1)
			ft_putchar(first);
		else if (i == x)
			ft_putchar(last);
		else
			ft_putchar(middle);
		i++;
	}
}

void	rush(int x, int y)
{
	int	i;

	i = 1;
	if (x <= 0 || y <= 0)
		return ;
	while (i <= y)
	{
		if (i == 1)
			ft_printline(x, '/', '*', '\\');
		else if (i == y)
			ft_printline(x, '\\', '*', '/');
		else
			ft_printline(x, '*', ' ', '*');
		ft_putchar('\n');
		i++;
	}
}
