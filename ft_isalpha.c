/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icopoglu <icopoglu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 12:23:48 by icopoglu          #+#    #+#             */
/*   Updated: 2023/07/14 13:27:26 by icopoglu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Bu fonksiyon, verilen karakterin bir harf olup olmadığını kontrol eder.
** 'c' parametresi, kontrol edilecek karakterin ASCII değerini temsil eder.
** Eğer karakter küçük harf veya büyük harf ise 1, aksi halde 0 döndürülür.
** Bu fonksiyon, ASCII değerlerine dayanarak kontrol yapar.
*/

int	ft_isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
