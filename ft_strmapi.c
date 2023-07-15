/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icopoglu <icopoglu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 13:40:54 by icopoglu          #+#    #+#             */
/*   Updated: 2023/07/14 15:33:09 by icopoglu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char            *str;
    unsigned int    i;

    i = 0;
    if (!s || !f)
        return (NULL);
    str = ft_strdup(s);
    if (!str)
        return (NULL);
    while (str[i])
    {
        str[i] = f(i, str[i]);
        i++;
    }
    return (str);
}
