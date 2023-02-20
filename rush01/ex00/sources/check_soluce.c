/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_soluce.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 18:39:21 by biaroun           #+#    #+#             */
/*   Updated: 2023/02/12 20:54:49 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_coin(char *str)
{
	if (str[16] == '1' && str[0] != '1')
		return (0);
	if (str[6] == '1' && str[24] != '1')
		return (0);
	if (str[30] == '1' && str[14] != '1')
		return (0);
	if (str[8] == '1' && str[22] != '1')
		return (0);
	if (str[0] == '1' && str[16] != '1')
		return (0);
	if (str[22] == '1' && str[8] != '1')
		return (0);
	if (str[14] == '1' && str[30] != '1')
		return (0);
	if (str[24] == '1' && str[6] != '1')
		return (0);
	return (1);
}

int	check_issolve(char *str)
{
	int	i;

	i = 0;
	while (i <= 22)
	{
		if (((str[i] - 48) + (str[i + 8] - 48) < 3
				|| (str[i] - 48) + (str[i + 8] - 48) > 5))
			return (0);
		if (i == 6)
			i = 16;
		i += 2;
	}
	return (check_coin(str));
}
