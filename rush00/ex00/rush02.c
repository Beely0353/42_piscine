/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 13:17:47 by biaroun           #+#    #+#             */
/*   Updated: 2023/02/05 18:11:51 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_printline(int x, char first, char middle, char last)
{
	int	w;

	w = 1;
	while (w <= x)
	{
		if (w == 1)
			ft_putchar(first);
		else if (w == x)
			ft_putchar(last);
		else
			ft_putchar(middle);
		w++;
	}
}

void	rush(int x, int y)
{
	int	h;

	h = 1;
	if (x <= 0 || y <= 0)
		return ;
	while (h <= y)
	{
		if (h == 1)
			ft_printline(x, 'A', 'B', 'A');
		else if (h == y)
			ft_printline(x, 'C', 'B', 'C');
		else
			ft_printline(x, 'B', ' ', 'B');
		ft_putchar('\n');
		h++;
	}
}
