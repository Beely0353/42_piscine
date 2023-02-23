/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 17:02:59 by biaroun           #+#    #+#             */
/*   Updated: 2023/02/23 14:46:17 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_atoi_base(char *str, char *base);

int	ft_check_base(char	*base)
{
	int		i;
	int		j;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		if (base[i] == ' ' || base[i] == '\n' || base[i] == '\t'
			|| base[i] == '\v' || base[i] == '\f' || base[i] == '\r')
			return (0);
		j = i + 1;
		while (base[j] != '\0')
			if (base[i] == base[j++])
				return (0);
		i++;
	}
	if (i <= 1)
		return (0);
	return (i);
}

int	ft_count(int i, int base_size)
{
	int	i_size;

	i_size = 0;
	while (i > 0)
	{
		i /= base_size;
		i_size++;
	}
	return (i_size);
}

char	*ft_getunbr_base(int nbr, char *base)
{
	long	i;
	int		j;
	int		base_size;
	int		i_size;
	char	*i_base;

	base_size = ft_check_base(base);
	if (!base_size)
		return (0);
	if (nbr < 0)
		nbr *= -1;
	i = nbr;
	i_size = ft_count(i, base_size);
	while (i > 0)
		i /= base_size;
	i_base = malloc(i_size + 1);
	j = -1;
	while (++j < i_size)
	{
		i_base[i_size - j - 1] = base[nbr % base_size];
		nbr /= base_size;
	}
	return (i_base);
}

char	*ft_getnbr_base(int nbr, char *base)
{
	char	*unbr;
	char	*nbr_base;
	int		nbr_size;
	int		sign;
	int		j;

	unbr = ft_getunbr_base(nbr, base);
	nbr_size = 0;
	while (unbr[nbr_size])
		nbr_size++;
	sign = 0;
	if (nbr < 0)
		sign = 1;
	nbr_base = malloc(nbr_size + sign);
	if (nbr < 0)
		nbr_base[0] = '-';
	j = -1;
	while (++j < nbr_size)
		nbr_base[j + sign] = unbr[j];
	free(unbr);
	return (nbr_base);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		nbr_from;

	nbr_from = ft_atoi_base(nbr, base_from);
	return (ft_getnbr_base(nbr_from, base_to));
}
/*int main()
{
	printf("%s\n",ft_convert_base("1000000", "01", "0123456789"));
}*/
