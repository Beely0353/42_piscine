/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 16:56:07 by biaroun           #+#    #+#             */
/*   Updated: 2023/02/20 16:43:41 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	sepcmp(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	count_word(char *str, char *charset)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (!sepcmp(str[i], charset))
		{
			j++;
			while (!sepcmp(str[i], charset) && str[i])
				i++;
			continue ;
		}
		i++;
	}
	return (j);
}

char	*setline(char *str, int *i, char *charset)
{
	char	*r;
	int		j;

	j = *i;
	while (!sepcmp(str[j], charset) && str[j])
		j++;
	r = malloc(sizeof(char) * (j - *i + 1));
	j = 0;
	while (!sepcmp(str[*i], charset) && str[*i])
		r[j++] = str[(*i)++];
	r[j] = '\0';
	return (r);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	char	**r;

	i = 0;
	j = 0;
	r = malloc(sizeof(char *) * count_word(str, charset) + 1);
	if (!r)
		return (0);
	while (str[i])
	{
		if (!sepcmp(str[i], charset))
		{
			r[j++] = setline(str, &i, charset);
			continue ;
		}
		i++;
	}
	r[j] = 0;
	return (r);
}

/*#include <stdio.h>
int main()
{
	int	i = 0;
	char **a = ft_split("je suis.la",".");

	while (a[i])
		printf("%s\n", a[i++]);
}*/
