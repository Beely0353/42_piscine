/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 15:16:11 by biaroun           #+#    #+#             */
/*   Updated: 2023/02/06 16:28:51 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = ft_strlen(src);
	j = -1;
	if (i + 1 < size)
	{
		while (++j < i + 1)
			dest[j] = src[j];
	}
	else if (size)
	{
		while (++j < size - 1)
			dest[j] = src[j];
		dest[j] = '\0';
	}
	return (i);
}
/*int main()
{
	char dest[5] = "test";
	char src[5] = "r";

	printf("%s\n",dest);
	ft_strlcpy(dest, src, 2);
}*/
