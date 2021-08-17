/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: christalbruneli <christalbruneli@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 19:35:03 by christalbru       #+#    #+#             */
/*   Updated: 2021/08/16 20:01:46 by christalbru      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t  i;
    char    *d;
    char    *s;

    i = 0;
    d = (char *)dest;
    s = (char *)src;
    while(i < n)
    {
        d[i] = s[i];
        i++;
    }
    return(dest);
}
