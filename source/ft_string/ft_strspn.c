/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtarrih <mtarrih@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 23:49:36 by mtarrih           #+#    #+#             */
/*   Updated: 2024/12/17 02:38:35 by mtarrih          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

size_t	ft_strspn(const char *s, const char *accept)
{
	char	hash[1 << 8];
	size_t	spn;

	if (!*accept)
		return (0);
	ft_memset(hash, 0, sizeof(hash));
	while (*accept)
	{
		hash[(unsigned char)*accept] = 1;
		accept++;
	}
	spn = 0;
	while (hash[(unsigned char)s[spn]])
		spn++;
	return (spn);
}
