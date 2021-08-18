/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: christalbruneli <christalbruneli@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 16:19:21 by christalbru       #+#    #+#             */
/*   Updated: 2021/08/18 16:22:04 by christalbru      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;

	str = malloc(sizeof(char) * (len + 1));
	if (!(str) || !s)
		return (NULL);
	if (start >= ft_strlen(s))
		ft_bzero(str, len + 1);
	else
	{
		s += start;
		ft_strlcpy(str, s, len + 1);
	}
	return (str);
}
