/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stdlib.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtarrih <mtarrih@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 14:18:37 by mtarrih           #+#    #+#             */
/*   Updated: 2025/03/30 19:00:19 by mtarrih          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STDLIB_H
# define FT_STDLIB_H

# include <stddef.h>

void	*ft_calloc(size_t nmemb, size_t size);
char	*ft_itoa(int n);
int		ft_atoi(const char *str);
int		atoi_s(const char *str, int *rstatus);
int		atoi_p(const char **str);
char	*ft_getenv(const char *name);
char	*findinpath(char *filename);

#endif
