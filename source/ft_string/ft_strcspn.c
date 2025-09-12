/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtarrih <mtarrih@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 23:49:36 by mtarrih           #+#    #+#             */
/*   Updated: 2024/12/17 02:38:13 by mtarrih          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

size_t	ft_strcspn(const char *s, const char *reject)
{
	char	hash[1 << 8];
	size_t	spn;

	ft_memset(hash, 0, sizeof(hash));
	while (*reject)
	{
		hash[(unsigned char)*reject] = 1;
		reject++;
	}
	spn = 0;
	while (s[spn])
	{
		if (hash[(unsigned char)s[spn]])
			return (spn);
		spn++;
	}
	return (spn);
}
