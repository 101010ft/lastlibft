/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icopoglu <icopoglu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 11:22:51 by icopoglu          #+#    #+#             */
/*   Updated: 2023/07/14 13:37:51 by icopoglu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Bu fonksiyon, bir karakter dizisinden baştaki ve sondaki belirli karakterleri atar.
** 's1' parametresi, işlem yapılacak karakter dizisinin başlangıç adresini temsil eder.
** 'set' parametresi, atılacak karakterlerin bulunduğu karakter dizisinin başlangıç adresini temsil eder.
** Yeni bir bellek bloğu ayrılarak, baştaki ve sondaki atılacak karakterler atılır.
** Eğer bellek ayrılamazsa NULL değeri döndürülür.
** Atılan karakterlerin olmadığı yeni karakter dizisinin başlangıç adresi geri döndürülür.
*/

char *ft_strtrim(char const *s1, char const *set)
{
    char *ret;
    int i;
    int j;
    int k;

    if (!s1 || !set)
        return(NULL);
    i = 0;
    while (s1[i] && ft_strchr(set, s1[i]))
        i++;
    j = ft_strlen(s1) - 1;
    while (j > i && ft_strchr(set, s1[j]))
        j--;
    ret = malloc(sizeof(char) * (j - i + 2));
    if (!ret)
        return(NULL);
    k = -1;
    while (++k < j - i + 1)
        ret[k] = s1[i + k];
    ret[k] = '\0';
    return(ret);
}