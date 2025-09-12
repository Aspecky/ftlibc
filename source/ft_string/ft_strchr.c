/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtarrih <mtarrih@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 13:49:34 by mtarrih           #+#    #+#             */
/*   Updated: 2025/04/14 21:36:31 by mtarrih          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

char	*ft_strchr(const char *s, int c)
{
	while (*(const uint8_t *)s != (uint8_t)c)
	{
		if (!*(const uint8_t *)s)
			return (0);
		s++;
	}
	return ((char *)s);
}
