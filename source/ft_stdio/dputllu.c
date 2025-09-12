/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dputllu.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtarrih <mtarrih@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 11:04:22 by mtarrih           #+#    #+#             */
/*   Updated: 2024/12/30 16:22:00 by mtarrih          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdio.h"
#include <limits.h>
#include <unistd.h>

#define LOG10_2 0.3010299956639812

int	dputllu(unsigned long long n, int fd)
{
	char	buf[(int)((sizeof(unsigned long long) * CHAR_BIT) * LOG10_2) + 1];
	size_t	i;

	if (n == 0)
		return ((int)write(fd, "0", 1));
	i = sizeof(buf);
	buf[--i] = '0';
	while (n)
	{
		buf[i--] = (char)(n % 10 + '0');
		n /= 10;
	}
	i++;
	return ((int)write(fd, buf + i, sizeof(buf) - i));
}
