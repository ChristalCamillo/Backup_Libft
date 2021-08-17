/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: christalbruneli <christalbruneli@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 19:34:59 by christalbru       #+#    #+#             */
/*   Updated: 2021/08/16 20:02:19 by christalbru      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int toupper(int c)
{
int character;

if (character >= 97 && character <= 122)
{   
    return (character - 32);
}

    else
    {   
        return (character);
    }
}
