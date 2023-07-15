/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icopoglu <icopoglu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 13:40:30 by icopoglu          #+#    #+#             */
/*   Updated: 2023/07/14 14:46:55 by icopoglu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_itoa(int n)
{
    char    *str;
    int     len;
    int     sign;
    int     tmp;

    len = 1;
    sign = 1;
    tmp = n;
    while (tmp /= 10)
        len++;
    if (n < 0)
    {
        sign = -1;
        len++;
    }
    if (!(str = (char *)malloc(sizeof(char) * (len + 1))))
        return (NULL);
    str[len] = '\0';
    while (len--)
    {
        str[len] = (n % 10) * sign + '0';
        n /= 10;
    }
    if (sign == -1)
        str[0] = '-';
    return (str);
}
