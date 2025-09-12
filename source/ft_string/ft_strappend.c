/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strappend.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtarrih <mtarrih@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 13:49:38 by mtarrih           #+#    #+#             */
/*   Updated: 2024/10/07 13:20:39 by mtarrih          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"
#include <stdlib.h>

char	*ft_strappend(char **s1ptr, char const *s2)
{
	size_t	len1;
	size_t	len2;
	char	*join;
	char	*s1;

	s1 = *s1ptr;
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	join = malloc(len1 + len2 + 1);
	if (join)
	{
		ft_memcpy(join, s1, len1);
		ft_memcpy(join + len1, s2, len2);
		join[len1 + len2] = 0;
	}
	free(s1);
	*s1ptr = join;
	return (join);
}
