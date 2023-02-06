/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 14:36:06 by biaroun           #+#    #+#             */
/*   Updated: 2023/02/02 14:37:31 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	char	*s;

	s = str;
	while (*s)
	{
		if (*s >= 'A' && *s <= 'Z')
			*s += 32;
		s++;
	}
	return (str);
}
/*int main()
{
	char t[] = "12je SuIs un TEST";
	printf("avant: %s\n",t);
	printf("apres: %s\n", ft_strlowcase(t));
}*/
