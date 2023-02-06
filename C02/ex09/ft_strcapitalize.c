/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 14:37:49 by biaroun           #+#    #+#             */
/*   Updated: 2023/02/02 15:15:59 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(char c)
{
	return (c >= '0' && c <= '9');
}

int	ft_islower(char c)
{
	return (c >= 'a' && c <= 'z');
}

int	ft_isupper(char c)
{
	return (c >= 'A' && c <= 'Z');
}

int	ft_isprintable(char c)
{
	return (ft_isupper(c) || ft_islower(c) || ft_isdigit(c));
}

char	*ft_strcapitalize(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (ft_isprintable(str[i]))
		{
			if (ft_islower(str[i]))
				str[i] -= 32;
			i++;
			while (ft_isprintable(str[i]))
			{
				if (ft_isupper(str[i]))
					str[i] += 32;
				i++;
			}
		}
		else
			i++;
	}
	return (str);
}
/*int main()
{
	char *r;
	char t[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	r = ft_strcapitalize(t);
	printf("%s\nSalut, Comment Tu Vas ? 42mots Quarante-Deux; Cinquante+Et+Un",r);
}*/
