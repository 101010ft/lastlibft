/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icopoglu <icopoglu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 12:44:48 by icopoglu          #+#    #+#             */
/*   Updated: 2023/07/14 13:27:58 by icopoglu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Bu fonksiyon, verilen karakterin basılabilir bir karakter olup olmadığını kontrol eder.
** 'c' parametresi, kontrol edilecek karakterin ASCII değerini temsil eder.
** Eğer karakter basılabilir bir karakter ise 1, aksi halde 0 döndürülür.
** Bu fonksiyon, ASCII değerlerine dayanarak kontrol yapar.
*/


int	ft_isprint(int c)
{
	return (c >= ' ' && '~' >= c);
}
