/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dputstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtarrih <mtarrih@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 10:47:54 by mtarrih           #+#    #+#             */
/*   Updated: 2025/01/16 09:15:55 by mtarrih          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdio.h"
#include <unistd.h>
#include <ft_string.h>

int	dputstr(const char *s, int fd)
{
	if (!s)
		return ((int)write(fd, "(null)", 6));
	return ((int)write(fd, s, ft_strlen(s)));
}
