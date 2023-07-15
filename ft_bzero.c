/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icopoglu <icopoglu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 19:09:20 by icopoglu          #+#    #+#             */
/*   Updated: 2023/07/14 13:26:55 by icopoglu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
** Bu fonksiyon, bellekteki bir alanı sıfırlar (0 değeriyle doldurur).
** 's' parametresi, sıfırlanacak bellek bloğunun başlangıç adresini temsil eder.
** 'n' parametresi, sıfırlanacak bellek bloğunun boyutunu belirtir.
** Bu fonksiyon, ft_memset işlevini kullanarak belleği sıfırlar.
*/

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
