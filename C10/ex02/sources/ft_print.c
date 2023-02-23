/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 19:30:39 by biaroun           #+#    #+#             */
/*   Updated: 2023/02/22 19:41:55 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_tail.h"

int	ft_print_offset_error(char *exec, char *offset)
{
	ft_putstr(basename(exec));
	ft_putstr(": illegal offset -- ");
	ft_putstr(offset);
	ft_putstr("\n");
	return (1);
}

int	ft_print_missing_error(char *exec)
{
	ft_putstr(basename(exec));
	ft_putstr(": option requires an argument -- c\n");
	ft_putstr("usage: ");
	ft_putstr(basename(exec));
	ft_putstr(" [-F | -f | -r] [-q] [-b # | -c # | -n #] [file ...]\n");
	return (1);
}

int	ft_print_file_error(char *exec, char *filename)
{
	ft_putstr(basename(exec));
	ft_putstr(": ");
	ft_putstr(filename);
	ft_putstr(": ");
	ft_putstr(strerror(errno));
	ft_putstr("\n");
	return (1);
}

int	ft_printerr(char *ex, char *fn)
{
	ft_putstr(basename(ex));
	ft_putstr(": ");
	ft_putstr(fn);
	ft_putstr(": ");
	ft_putstr(strerror(errno));
	ft_putstr("\n");
	return (1);
}
