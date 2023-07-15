/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icopoglu <icopoglu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 21:35:31 by icopoglu          #+#    #+#             */
/*   Updated: 2023/07/14 13:38:27 by icopoglu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Bu fonksiyon, iki karakter dizisini belirtilen sayıda karaktere kadar karşılaştırır.
** 's1' ve 's2' parametreleri, karşılaştırılacak karakter dizilerinin başlangıç adreslerini temsil eder.
** 'n' parametresi, karşılaştırma yapılacak karakter sayısını belirtir.
** Eğer karakter dizileri aynıysa 0 döndürülür.
** Eğer karakter dizileri farklıysa, ilk farklı karakterlerin farkını döndürür.
** Bu fonksiyon, unsigned char türü ile karakter dizilerini karşılaştırır.
*/

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while (i < n - 1 && s1[i] == s2[i] && (s1[i] && s2[i]))
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
