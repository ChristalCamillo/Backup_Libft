/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: christalbruneli <christalbruneli@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 19:34:46 by christalbru       #+#    #+#             */
/*   Updated: 2021/08/16 20:02:16 by christalbru      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strrchr(const char *s, int c)
{
    unsigned int    i;
    char    *last_occurence;

    last_occurence = NULL;
    i = 0;
    while(s[i])
    {
        if(s[i] == (char)c)
            last_occurence = (char*)&s[i];
        I++;
    }
    if((char)c == s[i])
        return((char*)&s[i]);
    return(last_occurence);
}
