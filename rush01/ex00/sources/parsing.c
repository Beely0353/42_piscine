/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 14:31:39 by biaroun           #+#    #+#             */
/*   Updated: 2023/02/12 14:19:31 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rush01.h"

void	set_line(char *str, char *line, int *i, int len)
{
	int	x;

	x = 0;
	line[x++] = '0';
	while (x < len - 2)
	{
		line[x] = str[*i];
		*i += 2;
		x++;
	}
	line[x++] = '0';
	line[x++] = '\0';
}

void	set_col(char *str, char **tab, int *i, int len)
{
	int	y;

	y = 1;
	while (y != len - 2)
	{
		tab[y][0] = str[*i];
		*i += 2;
		y++;
	}
	y = 1;
	while (y != len - 2)
	{
		tab[y][len - 2] = str[*i];
		*i += 2;
		y++;
	}
}

void	set_tab(char **tab, int len)
{
	int	y;
	int	x;

	y = 0;
	while (y != len - 1)
	{
		tab[y] = malloc(sizeof(char) * len);
		tab[y][len - 1] = '\0';
		x = 0;
		while (x != len - 1)
		{
			tab[y][x] = '0';
			x++;
		}
		y++;
	}
}

char	**tab_parsing(char *str)
{
	char	**tab;
	int		y;
	int		len;
	int		i;

	i = 0;
	len = 7;
	y = 0;
	tab = malloc(sizeof(char *) * len);
	tab[len - 1] = NULL;
	set_tab(tab, len);
	set_line(str, tab[0], &i, len);
	set_line(str, tab[len - 2], &i, len);
	set_col(str, tab, &i, len);
	return (tab);
}
