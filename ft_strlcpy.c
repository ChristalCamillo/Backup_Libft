/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: christalbruneli <christalbruneli@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 19:30:15 by christalbru       #+#    #+#             */
/*   Updated: 2021/08/16 20:02:09 by christalbru      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	indice;
	unsigned int	src_length;

	src_length = 0;
	indice = 0;
	while (indice < size - 1 && src[indice] != '\0')
	{
		dest[indice] = src[indice];
		indice ++;
	}
	while (indice < size)
	{
		dest[indice] = '\0';
		indice++;
	}
	while (src[src_length] != '\0')
	{
		src_length++;
	}
	return (dest);
}
