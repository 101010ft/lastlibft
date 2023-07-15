/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icopoglu <icopoglu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 21:29:38 by icopoglu          #+#    #+#             */
/*   Updated: 2023/07/14 13:38:01 by icopoglu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
** Bu fonksiyon, bir karakter dizisinde belirli bir karakterin son geçtiği yeri bulur.
** 's' parametresi, taranacak karakter dizisinin başlangıç adresini temsil eder.
** 'c' parametresi, aranan karakterin ASCII değerini temsil eder.
** Karakter dizisini sondan başlayarak tarar ve karakterin son geçtiği adresi döndürür.
** Eğer karakter bulunamazsa NULL değeri döndürülür.
*/

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}
