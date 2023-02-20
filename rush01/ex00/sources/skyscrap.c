/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   skyscrap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 18:39:36 by biaroun           #+#    #+#             */
/*   Updated: 2023/02/12 15:08:28 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rush01.h"

void	set_4to1(char **tab, int x, int y)
{
	if (x == 0)
	{
		tab[y][1] = '1';
		tab[y][2] = '2';
		tab[y][3] = '3';
		tab[y][4] = '4';
	}
	else if (x == 5)
	{
		tab[y][4] = '1';
		tab[y][3] = '2';
		tab[y][2] = '3';
		tab[y][1] = '4';
	}
}

void	set_1to4(char **tab, int x, int y)
{
	if (y == 0)
	{
		tab[1][x] = '1';
		tab[2][x] = '2';
		tab[3][x] = '3';
		tab[4][x] = '4';
	}
	else if (y == 5)
	{
		tab[4][x] = '1';
		tab[3][x] = '2';
		tab[2][x] = '3';
		tab[1][x] = '4';
	}
	set_4to1(tab, x, y);
}

void	check_4(char **tab)
{
	int	y;
	int	x;

	y = 0;
	while (tab[y])
	{
		x = 0;
		while (tab[y][x])
		{
			if (tab[y][x] == '4')
				set_1to4(tab, x, y);
			x++;
		}
		y++;
	}
}

void	set_skyscrap(char	**tab)
{
	check_4(tab);
	checkline_2_3(tab);
	checkcol_2_3(tab);
}
