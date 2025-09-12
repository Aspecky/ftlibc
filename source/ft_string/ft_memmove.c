/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtarrih <mtarrih@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 13:49:21 by mtarrih           #+#    #+#             */
/*   Updated: 2025/04/14 21:35:51 by mtarrih          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t	i;

	if (dst > src)
	{
		i = n;
		while (i > 0)
		{
			((uint8_t *)dst)[i - 1] = ((uint8_t *)src)[i - 1];
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			((uint8_t *)dst)[i] = ((uint8_t *)src)[i];
			i++;
		}
	}
	return (dst);
}
