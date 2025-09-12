/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtarrih <mtarrih@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 13:49:48 by mtarrih           #+#    #+#             */
/*   Updated: 2025/04/14 21:36:31 by mtarrih          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	size_t	i;
	int		diff;

	i = 0;
	diff = 0;
	while (diff == 0)
	{
		diff = (uint8_t)(s1[i]) - (uint8_t)(s2[i]);
		if ((uint8_t)s1[i] == 0 || (uint8_t)(s2[i]) == 0)
			break ;
		i++;
	}
	return (diff);
}
