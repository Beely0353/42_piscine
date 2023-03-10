/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 15:04:41 by biaroun           #+#    #+#             */
/*   Updated: 2023/02/12 16:27:51 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long int	i;

	i = 0;
	while (i <= 46340)
	{
		i++;
		if (i * i == nb)
			return (i);
	}
	return (0);
}
