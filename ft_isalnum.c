/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icopoglu <icopoglu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 12:43:11 by icopoglu          #+#    #+#             */
/*   Updated: 2023/07/14 13:27:17 by icopoglu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Bu fonksiyon, verilen karakterin alfanumerik bir karakter olup olmadığını kontrol eder.
** 'c' parametresi, kontrol edilecek karakterin ASCII değerini temsil eder.
** Eğer karakter alfabede veya rakamlarda yer alıyorsa 1, aksi halde 0 döndürülür.
** Bu fonksiyon, ft_isalpha ve ft_isdigit işlevlerini kullanarak kontrol yapar.
*/

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
