/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 16:50:20 by biaroun           #+#    #+#             */
/*   Updated: 2023/02/15 19:11:29 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	if (min >= max)
		return (0);
	max -= min;
	i = 0;
	tab = malloc(max * sizeof(int));
	if (!tab)
		return (0);
	while (i < max)
	{
		tab[i] = min;
		min++;
		i++;
	}
	return (tab);
}
