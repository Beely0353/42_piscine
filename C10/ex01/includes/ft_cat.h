/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 14:53:09 by biaroun           #+#    #+#             */
/*   Updated: 2023/02/22 17:27:24 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CAT_H
# define FT_CAT_H

# include <unistd.h>
# include <string.h>
# include <fcntl.h>
# include <libgen.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <sys/errno.h>

void	ft_putstr(char *str);
int		ft_putchar(char c);

#endif
