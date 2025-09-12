/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtarrih <mtarrih@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 13:49:33 by mtarrih           #+#    #+#             */
/*   Updated: 2024/12/13 10:21:25 by mtarrih          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"
#include <stdlib.h>

static void	free_splits(char **splits)
{
	size_t	i;

	i = 0;
	while (splits[i])
		free(splits[i++]);
	free(splits);
}

static char	*split_word(const char **pStr, char c)
{
	const char	*str;
	char		*word;
	size_t		len;
	size_t		i;

	str = *pStr;
	len = 0;
	while (str[len] && str[len] != c)
		len++;
	word = malloc(sizeof(char) * (len + 1));
	if (word)
	{
		word[len] = '\0';
		i = 0;
		while (i < len)
		{
			word[i] = str[i];
			i++;
		}
		*pStr = &str[len];
	}
	return (word);
}

char	**allocate_str_array(const char *str, char c)
{
	size_t	i;
	size_t	count;
	char	**arr;
	int		in_word;

	i = 0;
	in_word = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == c)
			in_word = 0;
		else if (!in_word)
		{
			in_word = 1;
			count += 1;
		}
		i++;
	}
	arr = malloc(sizeof(char *) * (count + 1));
	if (arr)
		arr[count] = 0;
	return (arr);
}

char	**ft_split(const char *str, char c)
{
	char	**splits;
	size_t	count;

	splits = allocate_str_array(str, c);
	if (!splits)
		return (0);
	count = 0;
	while (*str)
	{
		if (*str != c)
		{
			splits[count] = split_word(&str, c);
			if (!splits[count])
			{
				free_splits(splits);
				break ;
			}
			count++;
		}
		else
			str++;
	}
	return (splits);
}
