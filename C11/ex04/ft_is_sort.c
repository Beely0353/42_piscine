/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 11:53:55 by biaroun           #+#    #+#             */
/*   Updated: 2023/02/22 15:19:59 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_croissant(int *tab, int length, int (*f)(int, int))
{
	int		i;

	i = 0;
	while (i + 1 < length)
	{
		if (f(tab[i], tab[i + 1]) > 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_is_decroissant(int *tab, int length, int (*f)(int, int))
{
	int		i;

	i = 0;
	while (i + 1 < length)
	{
		if (f(tab[i], tab[i + 1]) < 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	if (ft_is_croissant(tab, length, f))
		return (1);
	if (ft_is_decroissant(tab, length, f))
		return (1);
	return (0);
}
