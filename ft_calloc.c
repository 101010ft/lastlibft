/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icopoglu <icopoglu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 01:32:04 by icopoglu          #+#    #+#             */
/*   Updated: 2023/07/14 13:27:06 by icopoglu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Bu fonksiyon, count * size boyutunda bir bellek alanı ayırır ve sıfırlar.
** 'count' parametresi, kaç adet öğe için bellek ayrılacağını belirtir.
** 'size' parametresi, her öğenin boyutunu belirtir.
** Bellek başarıyla ayrılamazsa NULL değeri döndürülür.
** Bellek ayrıldıktan sonra ft_bzero işlevi kullanılarak sıfırlanır.
** Son olarak, ayrılan bellek bloğunun başlangıç adresi geri döndürülür.
*/

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(size * count);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, size * count);
	return (ptr);
}
