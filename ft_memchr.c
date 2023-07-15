/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icopoglu <icopoglu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 21:54:33 by icopoglu          #+#    #+#             */
/*   Updated: 2023/07/14 13:28:10 by icopoglu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Bu fonksiyon, verilen bellek bloğunda belirli bir karakterin ilk bulunduğu konumu bulur.
** 's' parametresi, bellek bloğunun başlangıç adresini temsil eder.
** 'c' parametresi, aranan karakterin ASCII değerini temsil eder.
** 'n' parametresi, bellek bloğunun boyutunu belirtir.
** Eğer karakter bulunursa, ilk bulunduğu adres geri döndürülür.
** Bulunamazsa NULL değeri döndürülür.
*/


void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*(char *)s == c)
			return ((char *)s);
		s++;
		i++;
	}
	return (0);
}
