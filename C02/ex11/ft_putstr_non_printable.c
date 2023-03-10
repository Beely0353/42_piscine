/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 16:09:13 by biaroun           #+#    #+#             */
/*   Updated: 2023/02/07 16:33:50 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_printable(char c)
{
	if (c < ' ' || c == 127)
		return (0);
	return (1);
}

int	ft_isspace(int c)
{
	return (c == ' ' || c == '\t' || c == '\v'
		|| c == '\n' || c == '\f' || c == '\r');
}

void	ft_putunbr_hexa(int nbr)
{
	char	*hexa;

	hexa = "0123456789abcdef";
	if (nbr >= 16)
		ft_putunbr_hexa(nbr / 16);
	write(1, &hexa[nbr % 16], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (ft_str_is_printable(str[i]))
			write(1, &str[i], 1);
		else
		{
			write(1, "\\", 1);
			if (str[i] <= 15)
				write(1, "0", 1);
			ft_putunbr_hexa(str[i]);
		}
		i++;
	}
}
/*int main()
{
	char str[] = "Coucou\ntu \tv\as \bien ?";
	str[3] = 16;
	ft_putstr_non_printable(str);
}*/
