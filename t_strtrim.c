/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_strtrim.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: christalbruneli <christalbruneli@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 16:29:53 by christalbru       #+#    #+#             */
/*   Updated: 2021/08/18 16:41:06 by christalbru      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	len;

	if (s1 == NULL || set == NULL)
		return (NULL);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]) != NULL)
		start++;
	len = ftstrlen(&s1[start]);
	if (len != 0)
		while (s1[start + len - 1]
			&& ft_strrchr (set, s1[start + len - 1]) != NULL)
			len--;
	return (ft_substr(s1, start, len));
}
