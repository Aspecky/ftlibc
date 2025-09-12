/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rawmemchr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtarrih <mtarrih@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 13:49:14 by mtarrih           #+#    #+#             */
/*   Updated: 2025/04/14 21:36:02 by mtarrih          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

void	*ft_rawmemchr(const void *s, int c)
{
	const uint8_t	*ptr;

	ptr = s;
	while (*ptr != (uint8_t)c)
		ptr++;
	return ((void *)ptr);
}
