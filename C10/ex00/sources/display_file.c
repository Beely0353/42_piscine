/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 16:58:09 by biaroun           #+#    #+#             */
/*   Updated: 2023/02/23 19:16:39 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

void	ft_display_file(int fd)
{
	int		ret;
	char	str[2];

	ret = 42;
	while (ret)
	{
		ret = read(fd, str, 1);
		if (ret == -1)
		{
			write (2, "Cannot read file.\n", 18);
			return ;
		}
		write(1, &str, 1);
	}
}

int	main(int ac, char **av)
{
	int	fd;

	if (ac == 2)
	{
		fd = open(av[1], O_RDONLY);
		if (fd < 0)
		{
			write (2, "Cannot read file.\n", 18);
			close (fd);
			return (1);
		}
		ft_display_file(fd);
		close (fd);
		return (0);
	}
	else if (ac > 2)
		write (2, "Too many arguments.\n", 20);
	else
		write (2, "File name missing.\n", 19);
	return (1);
}
