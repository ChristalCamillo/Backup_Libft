/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: christalbruneli <christalbruneli@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 19:34:23 by christalbru       #+#    #+#             */
/*   Updated: 2021/08/16 20:01:52 by christalbru      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	ft_strlen(char *str)
{
	char	*charptr;
	int		operator;

	charptr = str;
	operator = 0;
	while (*charptr != 0)
	{
		operator++;
		charptr++;
	}
	return (operator);
}
