/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: christalbruneli <christalbruneli@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 19:34:38 by christalbru       #+#    #+#             */
/*   Updated: 2021/08/16 20:02:14 by christalbru      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char*ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t  b_size;
    size_t  l_size;
    size_t  s_size;

    b_size = ft_strlen(big);
    Lsize = ft_strlen(litte);
    if ((l_size == 0))
        return((char*)big);
    else if(l_size > b_size)
        return(NULL);
    if(b_size > len)
        s_size = len;
    else
        s_size = B_size;
    while(l_size <= s_size)
    {
        if(!ft_strncmp(big, little, l_size))
            return((char*)big);
        big++;
        s_size--;
    }
    return(NULL);
}
