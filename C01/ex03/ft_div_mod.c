/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 18:22:04 by biaroun           #+#    #+#             */
/*   Updated: 2023/02/02 11:41:12 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*int main()
{
	int div[1];
	int mod[1];
	int a = 20;
	int b = 2;

	ft_div_mod(a,b,div,mod);
	printf("%d/%d = %d\n%d%%%d = %d\n",a,b,*div,a,b,*mod);
}*/
