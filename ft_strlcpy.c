/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icopoglu <icopoglu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 19:10:12 by icopoglu          #+#    #+#             */
/*   Updated: 2023/07/14 13:32:23 by icopoglu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Bu fonksiyon, bir karakter dizisini belirtilen boyuta kadar bir hedef dizisine kopyalar.
** 'dst' parametresi, hedef dizinin başlangıç adresini temsil eder.
** 'src' parametresi, kaynak dizinin başlangıç adresini temsil eder.
** 'dstsize' parametresi, hedef dizinin boyutunu belirtir.
** Eğer 'dstsize' değeri 0 ise, sadece 'src' karakter dizisinin uzunluğu döndürülür.
** Bu fonksiyon, kaynak diziyi hedef diziye kopyalarken taşmaları önlemek için güvenli bir şekilde çalışır.
** Kopyalanan karakter dizisinin uzunluğu döndürülür.
*/

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (!dstsize)
		return (ft_strlen(src));
	while (i < dstsize - 1 && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}
