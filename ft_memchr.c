/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: christalbruneli <christalbruneli@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 20:05:57 by christalbru       #+#    #+#             */
/*   Updated: 2021/08/17 21:11:44 by christalbru      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*src;

	src = s;
	while (n--)
	{
		if (*src == (unsigned char)c)
			return ((void *)src);
		src++;
	}
	return (NULL);
}
