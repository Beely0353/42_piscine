/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 14:32:28 by biaroun           #+#    #+#             */
/*   Updated: 2023/02/12 19:12:53 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rush01.h"

int	check_arg1(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(i % 2))
		{
			if (!(str[i] >= '1' && str[i] <= '4'))
				return (0);
		}
		if (i % 2)
		{
			if (str[i] != ' ')
				return (0);
		}
		i++;
	}
	if (i != 31)
		return (0);
	return (check_issolve(str));
}
