/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icopoglu <icopoglu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 20:55:02 by icopoglu          #+#    #+#             */
/*   Updated: 2023/07/14 13:32:14 by icopoglu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


/*
** Bu fonksiyon, bir karakter dizisini belirtilen boyuta kadar bir hedef dizisine kopyalar.
** 'dst' parametresi, hedef dizinin başlangıç adresini temsil eder.
** 'src' parametresi, kaynak dizinin başlangıç adresini temsil eder.
** 'dstsize' parametresi, hedef dizinin boyutunu belirtir.
** Eğer 'dstsize' değeri 0 ise veya 'src' karakter dizisinin uzunluğu 0 ise,
** sadece 'src' karakter dizisinin uzunluğu döndürülür.
** Bu fonksiyon, kaynak diziyi hedef diziye kopyalarken taşmaları önlemek için güvenli bir şekilde çalışır.
** Kopyalanan karakter dizisinin uzunluğu döndürülür.
*/

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dlen;
	size_t	slen;

	dlen = ft_strlen(dst);
	slen = ft_strlen(src);
	i = 0;
	j = dlen;
	if (size == 0 || size <= dlen)
		return (slen + size);
	while (src[i] && i < size - dlen - 1)
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	return (dlen + slen);
}
