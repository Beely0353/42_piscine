/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 14:13:33 by biaroun           #+#    #+#             */
/*   Updated: 2023/02/02 14:18:27 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < ' ' || str[i] == 127)
			return (0);
		i++;
	}
	return (1);
}
/*int main()
{
	char str[5] = "TA";

	if (ft_str_is_printable(str))
		printf("printable");
	else
		printf("non-printable");
}*/
