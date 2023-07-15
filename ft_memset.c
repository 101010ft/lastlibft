/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icopoglu <icopoglu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 13:01:44 by icopoglu          #+#    #+#             */
/*   Updated: 2023/07/14 13:31:29 by icopoglu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Bu fonksiyon, bellek bloğunu belirtilen bir değerle doldurur.
** 'b' parametresi, bellek bloğunun başlangıç adresini temsil eder.
** 'c' parametresi, bellek bloğuna yazılacak değeri temsil eder.
** 'len' parametresi, bellek bloğunun boyutunu belirtir.
** Bu fonksiyon, unsigned char türü ile bellek bloğunu doldurur.
** Doldurulan bellek bloğunun başlangıç adresi geri döndürülür.
*/

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)b;
	while (len--)
		*ptr++ = (unsigned char)c;
	return (b);
}
