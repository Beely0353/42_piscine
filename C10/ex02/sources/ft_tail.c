/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 17:49:17 by biaroun           #+#    #+#             */
/*   Updated: 2023/02/23 19:08:41 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_tail.h"

int	ft_display_files_no(char **av)
{
	int		i;
	int		fd;
	int		ret;
	char	str[2];

	i = 0;
	while (av[++i])
	{
		ret = 42;
		fd = open(av[i], O_RDONLY);
		while (ret)
		{
			ret = read(fd, str, 1);
			if (ret == 0)
				break ;
			write (1, &str, 1);
		}
		close (fd);
	}
	return (0);
}

void	display_tail(char *av, int n, int tret)
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
	while (sret != tret - n)
	{
		ret = read(fd, str, 1);
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

int	read_fd_in(void)
{
	char	c;

	while (read (STDIN_FILENO, &c, 1) != 0)
		;
	return (1);
}

void	ft_tail(char **av)
{
	int	l;
	int	i;

	l = 0;
	i = 0;
	if (ft_strlen(av[1]) != 2)
	{
		i = 2;
		l = ft_atoi(av[1] + 2);
	}
	else
	{
		i = 3;
		l = ft_atoi(av[2]);
	}
	if (check_error(av, i))
		return ;
	while (av[i])
	{
		display_tail(av[i], l, count_size_line(av[i]));
		i++;
	}
}

int	main(int ac, char **av)
{
	int	i;
	int	nl;

	i = 0;
	nl = 0;
	if (ac == 1)
		read_fd_in();
	else if (ac > 1)
	{
		if (av[1][0] == '-')
		{
			if (ft_check_option(av))
				return (1);
			ft_tail(av);
		}
		else
			ft_tail_no(av);
	}
	return (0);
}
