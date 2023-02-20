/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 16:55:09 by biaroun           #+#    #+#             */
/*   Updated: 2023/02/15 17:26:30 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_count_total(char **strs, int size)
{
	int	r;
	int	j;

	j = 0;
	r = 0;
	while (j != size)
		r += ft_strlen(strs[j++]);
	return (r);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = ft_strlen(dest);
	while (src[i])
		dest[j++] = src[i++];
	dest[j] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dest;
	int		j;

	if (size == 0)
		return (malloc(sizeof(char)));
	dest = malloc (sizeof(char)
			* ft_count_total(strs, size) + ((size - 1) * ft_strlen(sep)) + 1);
	if (!dest)
		return (0);
	dest[0] = '\0';
	j = 0;
	while (size)
	{
		ft_strcat(dest, strs[j]);
		if (--size)
			ft_strcat(dest, sep);
		j++;
	}
	return (dest);
}
/*#include <stdio.h>
int main()
  {
  char* strs[] = {"Salut","Ca","Va?","hamdoullah","Merci"};
  char    sep[] = "/";
  printf("%s\n",ft_strjoin(5, strs, sep));
  return 0;
  }*/
