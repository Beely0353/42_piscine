/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 18:32:41 by biaroun           #+#    #+#             */
/*   Updated: 2023/02/02 11:47:02 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
/*int main()
{
	int a[1] = {20};
	int b[1] = {2};
	int c = *a;
	int d = *b;

	ft_ultimate_div_mod(a,b);
	printf("%d/%d = %d\n%d%%%d = %d\n",c,d,*a,c,d,*b);
}*/
