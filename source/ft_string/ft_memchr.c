/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtarrih <mtarrih@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 13:49:14 by mtarrih           #+#    #+#             */
/*   Updated: 2025/04/14 21:37:01 by mtarrih          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	uint8_t	*ptr;
	size_t	i;

	ptr = (uint8_t *)s;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == (uint8_t)c)
			return ((void *)(ptr + i));
		i++;
	}
	return (0);
}
