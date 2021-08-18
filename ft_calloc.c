/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: christalbruneli <christalbruneli@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 18:31:06 by christalbru       #+#    #+#             */
/*   Updated: 2021/08/17 21:00:11 by christalbru      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_calloc(size_t count, size_t size)
{
	char	*new;

	new = malloc(size * count);
	if (!new)
		return (NULL);
	ft_memset(new, 0, count * size);
	return (new);
}
