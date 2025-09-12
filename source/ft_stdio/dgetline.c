/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dgetline.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtarrih <mtarrih@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 16:14:01 by mtarrih           #+#    #+#             */
/*   Updated: 2025/05/29 16:20:21 by mtarrih          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "_dgetline.h"
#include "ft_stdio.h"
#include <ft_string.h>
#include <unistd.h>
#include <stdlib.h>

static ssize_t	extract_line(t_lninfo *lninfo, char *nl)
{
	size_t		size;

	if (nl)
		size = (size_t)(nl - lninfo->store) + 2;
	else
		size = lninfo->_store_size + 1;
	if (size > lninfo->line_size)
	{
		free(lninfo->line);
		lninfo->line = malloc(size);
		lninfo->line_size = size;
		if (!lninfo->line)
			return (-1);
	}
	lninfo->line = ft_memcpy(lninfo->line, lninfo->store, size - 1);
	lninfo->line[size - 1] = 0;
	ft_memmove(lninfo->store, lninfo->store + (size - 1),
		lninfo->_store_size - size + 1);
	lninfo->_store_size = lninfo->_store_size - size + 1;
	return ((ssize_t)size - 1);
}

static int	get_next_nl(int fd, t_lninfo *lninfo, char **nl)
{
	char		buf[BUFSIZE];
	ssize_t		nbytes;

	while (1)
	{
		*nl = ft_memchr(lninfo->store, '\n', lninfo->_store_size);
		if (*nl)
			break ;
		nbytes = read(fd, buf, BUFSIZE);
		if (nbytes == -1)
			return (0);
		if (nbytes == 0)
			return (1);
		lninfo->store = memapnd(lninfo->store, lninfo->_store_size, buf,
				(size_t)nbytes);
		lninfo->_store_size += (size_t)nbytes;
		if (!lninfo->store)
			return (0);
	}
	return (1);
}

ssize_t	dgetline(int fd, t_lninfo *lninfo)
{
	char	*nl;

	if (!get_next_nl(fd, lninfo, &nl))
		return (-1);
	if (!lninfo->line || !lninfo->line_size)
	{
		lninfo->line_size = 120;
		lninfo->line = malloc(lninfo->line_size);
		if (!lninfo->line)
			return (-1);
	}
	if (lninfo->_store_size == 0)
		return (free(lninfo->store), lninfo->store = 0, 0);
	return (extract_line(lninfo, nl));
}
