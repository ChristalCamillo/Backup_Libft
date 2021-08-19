/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: christalbruneli <christalbruneli@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 19:34:15 by christalbru       #+#    #+#             */
/*   Updated: 2021/08/18 18:25:24 by christalbru      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_dest_len(char *dest, size_t size)
{
	unsigned int	i;

	i = 0;
	while (dest[i] && (i < size))
		i++;
	return (i);
}

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	j;
	size_t			src_size;

	j = 0;
	i = ft_dest_len(dest, size);
	src_size = ft_strlen(src);
	if (i < size)
	{
		while (i + j < size - 1 && src[j])
		{
			dest[i + j] = src[j];
			j++;
		}
		dest[i + j] = '\0';
	}
	return (i + src_size);
}
