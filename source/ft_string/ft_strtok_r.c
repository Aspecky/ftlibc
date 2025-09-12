/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtok_r.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtarrih <mtarrih@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 16:22:14 by mtarrih           #+#    #+#             */
/*   Updated: 2024/12/25 23:31:52 by mtarrih          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

char	*ft_strtok_r(char *str, const char *delim, char **saveptr)
{
	char	*token;

	if (!str)
		str = *saveptr;
	str += ft_strspn(str, delim);
	if (!*str)
		return (*saveptr = str, NULL);
	token = str;
	str += ft_strcspn(str, delim);
	if (*str)
	{
		*str = 0;
		*saveptr = str + 1;
	}
	else
		*saveptr = str;
	return (token);
}
