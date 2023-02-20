/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 12:30:26 by biaroun           #+#    #+#             */
/*   Updated: 2023/02/12 16:27:53 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long int	i;

	i = 0;
	while (i * i < nb)
		i++;
	return (i);
}

int	ft_is_prime(int nb)
{
	int	divider;
	int	i;

	if (nb < 2 || (nb % 2 == 0 && nb != 2))
		return (0);
	i = ft_sqrt(nb) + 1;
	divider = 3;
	while (divider <= i)
	{
		if ((nb % divider) == 0)
			return (0);
		divider += 2;
	}
	return (1);
}
