/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 12:28:30 by biaroun           #+#    #+#             */
/*   Updated: 2023/02/02 12:56:04 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		if (!((str[i] >= 'A' && str[i] <= 'Z')
				|| (str[i] >= 'a' && str[i] <= 'z' )))
			return (0);
	}
	return (1);
}
/*int main()
{
	char str[5] = "t0to";

	if (ft_str_is_alpha(str))
		printf("que des lettres");
	else
		printf("pas que des lettres");
}*/
