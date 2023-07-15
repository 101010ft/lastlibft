/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icopoglu <icopoglu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 13:07:25 by icopoglu          #+#    #+#             */
/*   Updated: 2023/07/14 13:31:19 by icopoglu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Bu fonksiyon, bellek bloklarını birbirine güvenli bir şekilde kopyalar.
** 'dst' parametresi, hedef bellek bloğunun başlangıç adresini temsil eder.
** 'src' parametresi, kaynak bellek bloğunun başlangıç adresini temsil eder.
** 'len' parametresi, kopyalama yapılacak bayt sayısını belirtir.
** Eğer hedef veya kaynak bellek blokları NULL ise NULL değeri döndürülür.
** Eğer hedef ve kaynak bellek blokları aynı ise veya kopyalama yapılacak bayt sayısı 0 ise
** hedef bellek bloğunun adresi geri döndürülür.
** Bu fonksiyon, unsigned char türü ile bellek bloklarını güvenli bir şekilde kopyalar.
*/

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*ptr_dst;
	unsigned char	*ptr_src;

	if (dst == NULL || src == NULL)
		return (dst);
	ptr_dst = (unsigned char *)dst;
	ptr_src = (unsigned char *)src;
	if (ptr_dst < ptr_src)
	{
		while (len--)
			*ptr_dst++ = *ptr_src++;
	}
	else
	{
		ptr_dst += len - 1;
		ptr_src += len - 1;
		while (len--)
			*ptr_dst-- = *ptr_src--;
	}
	return (dst);
}
