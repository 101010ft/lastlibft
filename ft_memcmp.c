/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icopoglu <icopoglu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 21:56:24 by icopoglu          #+#    #+#             */
/*   Updated: 2023/07/14 13:28:33 by icopoglu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Bu fonksiyon, bellek bloklarının ilk 'n' baytını karşılaştırır.
** 's1' ve 's2' parametreleri, karşılaştırılacak bellek bloklarının başlangıç adreslerini temsil eder.
** 'n' parametresi, karşılaştırma yapılacak bayt sayısını belirtir.
** Eğer bellek blokları aynıysa 0 döndürülür.
** Eğer bellek blokları farklıysa, ilk farklı baytların farkını döndürür.
** Bu fonksiyon, unsigned char türü ile bellek bloklarını karşılaştırır.
*/

int	ft_memcmp(const void *s1, const void *s2, size_t n )
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*(unsigned char *)s1 != *(unsigned char *)s2)
			return (*(unsigned char *)s1 - *(unsigned char *)s2);
		s1++;
		s2++;
		i++;
	}
	return (0);
}
