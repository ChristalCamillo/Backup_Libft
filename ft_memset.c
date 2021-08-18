/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: christalbruneli <christalbruneli@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 19:33:55 by christalbru       #+#    #+#             */
/*   Updated: 2021/08/17 21:16:31 by christalbru      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *s, int c, size_t len)
{
	char	*str;

	str = (char *)s;
	while (len > 0)
	{
		str[len - 1] = c;
		len--;
	}
	return (s);
}
