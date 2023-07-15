/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icopoglu <icopoglu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 21:23:55 by icopoglu          #+#    #+#             */
/*   Updated: 2023/07/14 13:31:39 by icopoglu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Bu fonksiyon, verilen karakterin bir dizideki ilk örneğini bulur.
** 's' parametresi, taranacak karakter dizisinin başlangıç adresini temsil eder.
** 'c' parametresi, aranan karakterin ASCII değerini temsil eder.
** Eğer karakter bulunursa, ilk bulunduğu adres geri döndürülür.
** Bulunamazsa NULL değeri döndürülür.
*/

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	return (NULL);
}
