/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icopoglu <icopoglu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 14:45:26 by icopoglu          #+#    #+#             */
/*   Updated: 2023/07/14 13:31:08 by icopoglu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
** Bu fonksiyon, bellek bloklarını birbirine kopyalar.
** 'dst' parametresi, hedef bellek bloğunun başlangıç adresini temsil eder.
** 'src' parametresi, kaynak bellek bloğunun başlangıç adresini temsil eder.
** 'n' parametresi, kopyalama yapılacak bayt sayısını belirtir.
** Eğer hedef veya kaynak bellek blokları NULL ise NULL değeri döndürülür.
** Eğer hedef ve kaynak bellek blokları aynı ise veya kopyalama yapılacak bayt sayısı 0 ise
** hedef bellek bloğunun adresi geri döndürülür.
** Bu fonksiyon, unsigned char türü ile bellek bloklarını kopyalar.
*/


void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*ptr_dst;
	unsigned char	*ptr_src;

	if (!dst && !src)
		return (NULL);
	if (dst == src || n == 0)
		return (dst);
	ptr_dst = (unsigned char *)dst;
	ptr_src = (unsigned char *)src;
	while (n--)
		*ptr_dst++ = *ptr_src++;
	return (dst);
}
