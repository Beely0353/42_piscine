/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 19:24:21 by biaroun           #+#    #+#             */
/*   Updated: 2023/02/23 19:08:15 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_tail.h"

int	check_error(char **av, int i)
{
	int		fd;
	int		ret;
	char	str[2];

	while (av[i])
	{
		ret = 42;
		fd = open(av[i], O_RDONLY);
		if (fd < 0)
			return (ft_printerr(av[0], av[i]));
		while (ret)
		{
			ret = read(fd, str, 1);
			if (ret == -1)
				return (ft_printerr(av[0], av[i]));
			if (ret == 0)
				break ;
		}
		close (fd);
		i++;
	}
	return (0);
}

int	ft_check_option(char **av)
{
	if (av[1][1] == 'c' && av[1][2] == '\0' && !ft_is_numeric(av[2]))
	{
		ft_print_offset_error(av[0], av[2]);
		return (1);
	}
	else if (av[1][1] == 'c' && !ft_is_numeric(av[1] + 2))
	{
		ft_print_offset_error(av[0], av[1] + 2);
		return (1);
	}
	return (0);
}
