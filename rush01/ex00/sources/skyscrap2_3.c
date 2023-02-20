/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   skyscrap2_3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 14:18:30 by biaroun           #+#    #+#             */
/*   Updated: 2023/02/12 14:44:19 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rush01.h"

void	setline2_3(char **tab, int y, int x)
{
	if (tab[y][x] == '2' && x == 0)
	{
		tab[y][3] = '4';
		tab[y][4] = '3';
	}
	if (tab[y][x] == '3' && x == 0)
	{
		tab[y][2] = '3';
		tab[y][3] = '4';
	}
}

void	checkline_2_3(char **tab)
{
	int	y;
	int	x;

	y = 0;
	while (tab[y])
	{
		x = 0;
		while (tab[y][x])
		{
			if (tab[y][x] == '2' && x == 0)
			{
				if (tab[y][5] == '3')
					setline2_3(tab, y, x);
			}
			if (tab[y][x] == '3' && x == 0)
			{
				if (tab[y][5] == '2')
					setline2_3(tab, y, x);
			}
			x++;
		}
		y++;
	}
}

void	setcol2_3(char **tab, int y, int x)
{
	if (tab[y][x] == '2' && x == 0)
	{
		tab[3][x] = '4';
		tab[4][x] = '3';
	}
	if (tab[y][x] == '3' && x == 0)
	{
		tab[2][x] = '3';
		tab[3][x] = '4';
	}
}

void	checkcol_2_3(char **tab)
{
	int	y;
	int	x;

	y = 0;
	while (tab[y])
	{
		x = 0;
		while (tab[y][x])
		{
			if (tab[y][x] == '2' && y == 0)
			{
				if (tab[y][5] == '3')
					setcol2_3(tab, y, x);
			}
			if (tab[y][x] == '3' && y == 0)
			{
				if (tab[y][5] == '2')
					setcol2_3(tab, y, x);
			}
			x++;
		}
		y++;
	}
}
