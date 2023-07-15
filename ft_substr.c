/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icopoglu <icopoglu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 11:35:53 by icopoglu          #+#    #+#             */
/*   Updated: 2023/07/14 14:57:38 by icopoglu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Bu fonksiyon, bir karakter dizisinin belirli bir konumundan itibaren belirli bir uzunlukta
** bir alt diziyi alır.
** 's' parametresi, ana karakter dizisinin başlangıç adresini temsil eder.
** 'start' parametresi, alt dizinin başlayacağı konumu temsil eder.
** 'len' parametresi, alınacak alt dizinin uzunluğunu belirtir.
** Eğer başlangıç konumu ana karakter dizisinin boyutunu aşıyorsa veya bellek ayrılamazsa NULL değeri döndürülür.
** Alınan alt dizi için yeni bir bellek bloğu ayrılır ve alt dizi kopyalanır.
** Alınan alt dizinin başlangıç adresi geri döndürülür.
*/

char *ft_substr(char const *s, unsigned int start, size_t len)
{   
    char *ret;
    int i;
    
    if(ft_strlen(s) < (int)start)
        return(NULL);
    ret = malloc(sizeof(char) * (len + 1));
    if (!ret)
        return(NULL);
    i = -1;
    while (s[start + ++i] && i < (int)len)
        ret[i] = s[start + i];
    ret[i] = '\0';
    return(ret); 



}
