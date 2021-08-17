/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: christalbruneli <christalbruneli@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 19:34:33 by christalbru       #+#    #+#             */
/*   Updated: 2021/08/16 20:02:11 by christalbru      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int strncmp(const char *s1, const char *s2, size_t n)
{
    size_t  i;

    if(n == 0)
        return(0);
    i = 0;
    while(s1[i] != '\0' && s1[i] == s2[i] && i < n - 1)
        i++;
    return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
