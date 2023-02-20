/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 14:26:58 by biaroun           #+#    #+#             */
/*   Updated: 2023/02/12 19:11:06 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH01_H
# define RUSH01_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

int		check_arg1(char *str);
int		check_issolve(char *str);
char	**tab_parsing(char *str);
void	set_skyscrap(char	**tab);
void	print_tab(char **tab);
void	checkline_2_3(char **tab);
void	checkcol_2_3(char **tab);

#endif
