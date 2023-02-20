/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 16:56:15 by biaroun           #+#    #+#             */
/*   Updated: 2023/02/09 14:30:48 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (*s1 && *s1 == *s2 && n)
	{
		s1++;
		s2++;
		n--;
	}
	if (n)
		return (*s1 - *s2);
	else
		return (0);
}
/*int main()
{
	char a[] = "testdasd";
	char b[] = "testtsas";

	printf("%d\n%d\n", ft_strncmp(a,b,4), strncmp(a,b,4));
}*/
