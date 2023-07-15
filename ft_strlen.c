/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icopoglu <icopoglu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 12:52:45 by icopoglu          #+#    #+#             */
/*   Updated: 2023/07/14 13:32:33 by icopoglu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
** Bu fonksiyon, verilen karakter dizisinin uzunluğunu hesaplar.
** 's' parametresi, uzunluğu hesaplanacak karakter dizisinin başlangıç adresini temsil eder.
** Karakter dizisi üzerinde döngü ile ilerleyerek son karaktere ulaşılır ve
** bu süre boyunca karakter sayısı sayılır.
** Karakter sayısı, karakter dizisinin uzunluğunu temsil eder ve geri döndürülür.
*/

size_t	ft_strlen(const char *s)
{
	size_t	index;

	index = 0;
	while (s[index])
		index++;
	return (index);
}
