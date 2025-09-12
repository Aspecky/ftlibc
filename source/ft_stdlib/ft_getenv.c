/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getenv.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtarrih <mtarrih@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 01:08:51 by mtarrih           #+#    #+#             */
/*   Updated: 2025/01/16 09:14:26 by mtarrih          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdlib.h"

extern char	**environ;

char	*ft_getenv(const char *name)
{
	char	*str;
	size_t	len;

	while (*environ)
	{
		str = *environ;
		len = 0;
		while (str[len] && str[len] == name[len])
			len++;
		if (!name[len] && str[len] == '=')
			return (str + len + 1);
		environ++;
	}
	return (0);
}
