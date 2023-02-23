/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tailcount.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 17:48:23 by biaroun           #+#    #+#             */
/*   Updated: 2023/02/23 15:27:16 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_tail.h"

int	count_size_line(char *av)
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
	while (ret)
	{
		ret = read(fd, str, 1);
		if (ret == 0)
			break ;
		sret += ret;
	}
	close (fd);
	return (sret);
}

int	count_line(char **av, int i)
{
	char	str[2];
	int		j;
	int		ret;
	int		fd;

	j = 0;
	ret = 42;
	fd = open(av[i], O_RDONLY);
	while (ret)
	{
		ret = read(fd, str, 1);
		if (str[0] == '\n')
			j++;
	}
	return (j);
}
