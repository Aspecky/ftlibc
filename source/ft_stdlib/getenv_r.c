/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getenv_r.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtarrih <mtarrih@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 16:18:26 by mtarrih           #+#    #+#             */
/*   Updated: 2025/09/16 18:05:12 by mtarrih          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdlib.h"

char	*getenv_r(const char *name, char *const envp[])
{
	char	*str;
	size_t	len;

	while (*envp)
	{
		str = *envp;
		len = 0;
		while (str[len] && str[len] == name[len])
			len++;
		if (!name[len] && str[len] == '=')
			return (str + len + 1);
		envp++;
	}
	return (0);
}
