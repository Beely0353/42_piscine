/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 14:08:33 by biaroun           #+#    #+#             */
/*   Updated: 2023/02/02 14:13:15 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 'A' || str[i] > 'Z' )
			return (0);
		i++;
	}
	return (1);
}
/*int main()
{
	char str[5] = "TA";

	if (ft_str_is_uppercase(str))
		printf("que des lettres maj");
	else
		printf("pas que des lettres maj");
}*/
