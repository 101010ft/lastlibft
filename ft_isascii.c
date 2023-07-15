/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icopoglu <icopoglu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 12:44:03 by icopoglu          #+#    #+#             */
/*   Updated: 2023/07/14 13:27:37 by icopoglu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Bu fonksiyon, verilen karakterin ASCII tablosunda basılı bir karakter olup olmadığını kontrol eder.
** 'c' parametresi, kontrol edilecek karakterin ASCII değerini temsil eder.
** Eğer karakter basılı bir karakter ise 1, aksi halde 0 döndürülür.
** Bu fonksiyon, ASCII değerlerine dayanarak kontrol yapar.
*/

int	ft_isascii(int c)
{
	return (c >= 0 && 127 >= c);
}
