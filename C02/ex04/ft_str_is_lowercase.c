/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 14:06:18 by biaroun           #+#    #+#             */
/*   Updated: 2023/02/02 14:07:45 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		if (str[i] < 'a' || str[i] > 'z' )
			return (0);
	}
	return (1);
}
/*int main()
{
	char str[5] = "totO";

	if (ft_str_is_lowercase(str))
		printf("que des lettres mini");
	else
		printf("pas que des lettres mini");
}*/
