/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icopoglu <icopoglu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 01:46:04 by icopoglu          #+#    #+#             */
/*   Updated: 2023/07/14 13:31:51 by icopoglu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Bu fonksiyon, verilen karakter dizisini kopyalar.
** 's1' parametresi, kopyalanacak karakter dizisinin başlangıç adresini temsil eder.
** Yeni bir bellek bloğu ayrılarak kopyalama işlemi gerçekleştirilir.
** Eğer bellek ayrılamazsa NULL değeri döndürülür.
** Kopyalanan karakter dizisinin başlangıç adresi geri döndürülür.
*/

char	*ft_strdup(const char *s1)
{
	char	*copy;
	int		i;

	i = 0;
	copy = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (!copy)
		return (NULL);
	while (s1[i])
	{
		copy[i] = s1[i];
		i++;
	}
	copy[i] = s1[i];
	return (copy);
}
