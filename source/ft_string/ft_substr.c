/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtarrih <mtarrih@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 13:49:54 by mtarrih           #+#    #+#             */
/*   Updated: 2024/12/13 09:14:20 by mtarrih          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"
#include <stdlib.h>

char	*ft_substr(char const *src, unsigned int start, size_t len)
{
	char	*sub;
	size_t	src_len;
	size_t	size;

	src_len = ft_strlen(src);
	if (start > src_len)
		return (0);
	size = len + 1;
	if (start + len > src_len)
		size = src_len - start + 1;
	sub = malloc(sizeof(char) * size);
	if (!sub)
		return (0);
	ft_memcpy(sub, src + start, size - 1);
	sub[size - 1] = 0;
	return (sub);
}
