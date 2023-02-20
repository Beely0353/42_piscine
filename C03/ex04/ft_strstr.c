/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 18:45:41 by biaroun           #+#    #+#             */
/*   Updated: 2023/02/06 19:00:44 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	if (!*to_find)
		return (str);
	while (*str)
	{
		if (*str == *to_find)
		{
			i = 1;
			while (to_find[i] && str[i] == to_find[i])
			{
				i++;
			}
			if (!to_find[i])
				return (str);
		}
		str++;
	}
	return (0);
}
/*int	main()
{
	char str[] = "je suis un test";
	char find[] = "un";

	printf("%s\n",ft_strstr(str,find));
}*/
