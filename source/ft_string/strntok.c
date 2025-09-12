/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strntok.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtarrih <mtarrih@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 22:23:30 by mtarrih           #+#    #+#             */
/*   Updated: 2025/04/14 21:36:31 by mtarrih          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

size_t	strntok(const char *str, const char *delim)
{
	char	hash[1 << 8];
	size_t	count;
	int		in_word;

	ft_memset(hash, 0, sizeof(hash));
	while (*delim)
	{
		hash[(uint8_t)(*delim)] = 1;
		delim++;
	}
	in_word = 0;
	count = 0;
	while (*str)
	{
		if (hash[(uint8_t)(*str)])
			in_word = 0;
		else if (!in_word)
		{
			in_word = 1;
			count += 1;
		}
		str++;
	}
	return (count);
}
