/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stdio.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtarrih <mtarrih@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 22:51:38 by mtarrih           #+#    #+#             */
/*   Updated: 2025/05/29 16:20:21 by mtarrih          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STDIO_H
# define FT_STDIO_H

# include <sys/types.h>

# define STDIN	0
# define STDOUT	1
# define STDERR	2

int		dputchar(char c, int fd);
int		ft_putchar(char c);

int		dputstr(const char *s, int fd);
int		putstr(const char *s);

int		dputllu(unsigned long long n, int fd);
int		dputlli(long long n, int fd);
int		putllu(unsigned long long n);
int		putlli(long long n);

typedef struct s_lninfo
{
	char	*line;
	size_t	line_size;
	char	*store;
	size_t	_store_size;
}	t_lninfo;

ssize_t	dgetline(int fd, t_lninfo *lninfo);

#endif
