/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeluiz4 <jeffluiz97@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 23:43:11 by jeluiz4           #+#    #+#             */
/*   Updated: 2022/06/14 04:01:57 by jeluiz4          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(char *str)
{
	size_t	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i])
		i++;
	return (i);
}

long int	ft_nseek(char *haystack)
{
	long int	i;
	long int	len;

	i = 0;
	len = ft_strlen(haystack);
	while (i <= len)
	{
		if (haystack[i] == '\n')
			return (i);
		i++;
	}
	return (-1);
}

char	*ft_memcpy(char *dest, char *src, size_t n)
{
	size_t	i;

	i = 0;
	while (n-- > 0)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

char	*faklloc(char *str)
{
	str = malloc(1);
	if (!str)
		return (NULL);
	str[0] = 0;
	return (str);
}
