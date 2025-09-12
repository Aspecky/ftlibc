/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtarrih <mtarrih@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 13:49:40 by mtarrih           #+#    #+#             */
/*   Updated: 2024/09/30 14:21:18 by mtarrih          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;

	src_len = 0;
	dst_len = 0;
	if (size > 0)
	{
		while (dst_len < size && dst[dst_len])
			dst_len++;
		if (dst_len < size - 1)
		{
			while (src_len + dst_len < size - 1 && src[src_len])
			{
				dst[dst_len + src_len] = src[src_len];
				src_len++;
			}
			dst[dst_len + src_len] = 0;
		}
	}
	while (src[src_len])
		src_len++;
	return (dst_len + src_len);
}
