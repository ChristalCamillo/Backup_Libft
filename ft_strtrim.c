/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrbrune <chrbrune@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 18:59:24 by chrbrune          #+#    #+#             */
/*   Updated: 2021/08/19 18:59:45 by chrbrune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char *s1, char *set)
{
	int				start;
	size_t			end;
	unsigned char	*ss1;
	unsigned char	*sset;

	if (!s1 || !set)
		return (NULL);
	ss1 = (unsigned char *)s1;
	sset = (unsigned char *)set;
	end = ft_strlen((char *)ss1) - 1;
	start = 0;
	while (ft_strchr((char *)sset, ss1[start]))
		start++;
	if (start >= (int)ft_strlen((char *)ss1))
		return (ft_strdup(""));
	while (ft_strchr((char *)sset, ss1[end]))
		end--;
	return (ft_substr((char *)ss1, start, end - start + 1));
}
