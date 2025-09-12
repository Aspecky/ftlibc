/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   findinpath.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtarrih <mtarrih@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 05:56:18 by mtarrih           #+#    #+#             */
/*   Updated: 2025/01/16 09:14:26 by mtarrih          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdlib.h"
#include <ft_string.h>
#include <unistd.h>

static char	*look_in_dir(char *cmd, size_t cmd_len, char *path, size_t *i)
{
	size_t	path_len;
	size_t	size;
	char	*cmd_path;

	path_len = 0;
	while (path[path_len] && path[path_len] != ':')
		path_len++;
	size = (path_len + cmd_len + 2);
	cmd_path = malloc(sizeof(char) * size);
	if (!cmd_path)
		return (0);
	cmd_path[size - 1] = 0;
	ft_memcpy(cmd_path, path, path_len);
	*(cmd_path + path_len) = '/';
	ft_memcpy(cmd_path + path_len + 1, cmd, cmd_len);
	if (access(cmd_path, F_OK) == 0)
		return (cmd_path);
	free(cmd_path);
	*i += path_len - 1;
	return (0);
}

char	*findinpath(char *filename)
{
	char	*path;
	int		in_word;
	char	*cmd_path;
	size_t	len;
	size_t	i;

	len = ft_strlen(filename);
	path = ft_getenv("PATH");
	i = 0;
	in_word = 0;
	while (path[i])
	{
		if (path[i] == ':')
			in_word = 0;
		else if (!in_word)
		{
			in_word = 1;
			cmd_path = look_in_dir(filename, len, path + i, &i);
			if (cmd_path)
				return (cmd_path);
		}
		i++;
	}
	return (0);
}
