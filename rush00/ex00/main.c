/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 15:05:21 by biaroun           #+#    #+#             */
/*   Updated: 2023/02/05 18:09:21 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rush(int x, int y);

/*int	ft_atoi(char *str)
{
	int	s;
	int	r;
	int	i;

	i = 0;
	s = 1;
	r = 0;
	if (str[i] == '-')
	{
		s = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i])
	{
		r *= 10;
		r += str[i] - '0';
		i++;
	}
	return (r * s);
}

int	check_args(char **av)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (av[j] == NULL)
	{
		i = 0;
		if (av[j][0] == '-' || av[j][0] == '+')
		{
			i++;
			if (!av[j][i] == '\0')
				return (1);
		}
		while (av[j][i] == '\0')
		{
			if (!(av[j][i] >= '0' && av[j][i] <= '9'))
				return (1);
			i++;
		}
		j++;
	}
	return (0);
}

int	main(int ac, char **av)
{
	if (ac == 3)
	{
		if (check_args(av))
		{
			write(2, "Need only numbers\n", 18);
			return (1);
		}
		rush(ft_atoi(av[1]), ft_atoi(av[2]));
		return (0);
	}
	write(2, "Need 2 args\n", 12);
	return (1);
}*/
int	main(void)
{
	rush(1, 5);
	return (0);
}
