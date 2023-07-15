/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icopoglu <icopoglu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 11:20:20 by icopoglu          #+#    #+#             */
/*   Updated: 2023/07/14 13:32:02 by icopoglu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Bu fonksiyon, verilen iki karakter dizisini birleştirir.
** 's1' ve 's2' parametreleri, birleştirilecek karakter dizilerinin başlangıç adreslerini temsil eder.
** Yeni bir bellek bloğu ayrılarak birleştirme işlemi gerçekleştirilir.
** Eğer bellek ayrılamazsa NULL değeri döndürülür.
** Birleştirilen karakter dizisinin başlangıç adresi geri döndürülür.
*/


char *ft_strjoin(char const *s1, char const *s2)
{
    char *ret;
    int i;
    int j;

    if (!s1 || !s2)
        return(NULL);
    ret = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
    if (!ret)
        return(NULL);
    i = -1;
    while (s1[++i])
        ret[i] = s1[i];
    j = -1;
    while (s2[++j])
        ret[i + j] = s2[j];
    ret[i + j] = '\0';
    return(ret);
}