/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: christalbruneli <christalbruneli@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 20:00:47 by christalbru       #+#    #+#             */
/*   Updated: 2021/08/17 21:41:20 by christalbru      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	ft_toupper(int c)
{
	int	character;

	if (character >= 65 && character <= 90)
	{
		return (character + 32);
	}
	else
	{
		return (character);
	}
}
