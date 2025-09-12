/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dputlli.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtarrih <mtarrih@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 11:04:22 by mtarrih           #+#    #+#             */
/*   Updated: 2024/12/30 16:33:19 by mtarrih          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdio.h"

int	dputlli(long long n, int fd)
{
	unsigned long long	nabs;
	int					len;

	nabs = (unsigned long long)n;
	len = 0;
	if (n < 0)
	{
		len += dputchar('-', fd);
		nabs = ~0ull - nabs + 1;
	}
	len += dputllu(nabs, fd);
	return (len);
}
