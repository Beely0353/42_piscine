/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 14:53:09 by biaroun           #+#    #+#             */
/*   Updated: 2023/02/23 14:13:44 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_TAIL_H
# define FT_TAIL_H

# include <stdio.h>
# include <unistd.h>
# include <string.h>
# include <fcntl.h>
# include <libgen.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <sys/errno.h>

int		ft_atoi(char *str);
int		ft_strlen(char *str);
void	ft_putstr(char *str);
int		ft_putchar(char c);
int		check_error(char **av, int i);
int		count_size_line(char *av);
int		ft_check_option(char **av);
int		ft_is_numeric(char *str);

int		ft_print_offset_error(char *exec, char *offset);
int		ft_print_missing_error(char *exec);
int		ft_print_file_error(char *exec, char *filename);
int		ft_printerr(char *ex, char *fn);

#endif
