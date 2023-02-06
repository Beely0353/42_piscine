/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 14:18:40 by biaroun           #+#    #+#             */
/*   Updated: 2023/02/02 14:35:53 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	char	*s;

	s = str;
	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
			*s -= 32;
		s++;
	}
	return (str);
}
/*int main()
{
	char t[] = "12je SuIs un TEST";
	printf("avant: %s\n",t);
	printf("apres: %s\n", ft_strupcase(t));
}*/
