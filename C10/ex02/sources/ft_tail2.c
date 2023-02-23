/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 17:48:55 by biaroun           #+#    #+#             */
/*   Updated: 2023/02/23 19:06:43 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_tail.h"

void	display_tail_no(char *av, int tret)
{
	int		i;
	int		fd;
	int		ret;
	int		sret;
	char	str[2];

	i = 0;
	sret = 0;
	ret = 42;
	fd = open(av, O_RDONLY);
	while (sret < tret - 15)
	{
		ret = read(fd, str, 1);
		if (str[0] == '\n')
			sret += ret;
	}
	while (ret)
	{
		ret = read(fd, str, 1);
		if (ret == 0)
			break ;
		write (1, &str, 1);
	}
	close (fd);
}

void	ft_tail_no(char **av)
{
	int	i;

	i = 0;
	if (check_error(av, 1))
		return ;
	while (av[++i])
		display_tail_no(av[i], count_line(av[i]));
}
