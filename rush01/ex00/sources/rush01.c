/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 14:27:21 by biaroun           #+#    #+#             */
/*   Updated: 2023/02/14 13:36:34 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rush01.h"

void	free_tab(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
		free(tab[i++]);
	free(tab[i]);
	free(tab);
}

int	main(int ac, char **av)
{
	char	**tab;

	if (ac == 2 && check_arg1(av[1]))
	{
		tab = tab_parsing(av[1]);
		set_skyscrap(tab);
		print_tab(tab);
		free_tab(tab);
		return (0);
	}
	write(2, "Error\n", 6);
	return (1);
}
