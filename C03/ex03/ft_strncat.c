/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 18:43:51 by biaroun           #+#    #+#             */
/*   Updated: 2023/02/09 14:30:11 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j] && nb--)
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (dest);
}
/*int main()
{
	char dst[10000] = "je";
	char src[10] = " test";

	printf("%s\n",strncat(dst,src, 2));
}*/
