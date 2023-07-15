/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icopoglu <icopoglu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 21:57:49 by icopoglu          #+#    #+#             */
/*   Updated: 2023/07/14 13:38:12 by icopoglu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Bu fonksiyon, bir karakter dizisinde belirli bir alt diziyi arar.
** 'haystack' parametresi, taranacak ana karakter dizisinin başlangıç adresini temsil eder.
** 'needle' parametresi, aranacak alt dizi karakter dizisinin başlangıç adresini temsil eder.
** 'len' parametresi, ana karakter dizisinde arama yapılacak maksimum uzunluğu belirtir.
** Eğer aranan alt dizi bulunursa, ilk bulunduğu adres geri döndürülür.
** Bulunamazsa NULL değeri döndürülür.
*/

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	c;
	size_t	n_len;
	char	*hay;

	i = 0;
	hay = (char *)haystack;
	n_len = ft_strlen(needle);
	if (n_len == 0 || haystack == needle)
		return (hay);
	while (hay[i] != '\0' && i < len)
	{
		c = 0;
		while (hay[i + c] != '\0' && needle[c] != '\0'
			&& hay[i + c] == needle[c] && i + c < len)
			c++;
		if (c == n_len)
			return (hay + i);
		i++;
	}
	return (0);
}
