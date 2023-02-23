/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 17:53:59 by biaroun           #+#    #+#             */
/*   Updated: 2023/02/22 17:28:51 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_cat.h"

int	ft_printerr(char *ex, char *fn)
{
	ft_putstr(basename(ex));
	ft_putstr(": ");
	ft_putstr(fn);
	ft_putstr(": ");
	ft_putstr(strerror(errno));
	ft_putstr("\n");
	return (0);
}

int	ft_display_files(char **av)
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
		if (fd < 0)
			return (ft_printerr(av[0], av[i]));
		while (ret)
		{
			ret = read(fd, str, 1);
			if (ret == -1)
				return (ft_printerr(av[0], av[i]));
			if (ret == 0)
				break ;
			write (1, &str, 1);
		}
		close (fd);
	}
	return (0);
}

int	read_fd_in(void)
{
	char	c;

	while (read (STDIN_FILENO, &c, 1) != 0)
		write (1, &c, 1);
	return (1);
}

int	main(int ac, char **av)
{
	if (ac > 1)
		ft_display_files(av);
	else if (ac < 2 || (av[1][0] == '-' && av[1][1] == '\0'))
		return (read_fd_in());
}
